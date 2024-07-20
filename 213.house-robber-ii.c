/*
 * @lc app=leetcode id=213 lang=c
 *
 * [213] House Robber II
 */

// @lc code=start

// 這個問題可以分解為兩個198題的問題：
// 不包括最後一間房屋的最大搶劫金額。
// 不包括第一間房屋的最大搶劫金額。
// 最終答案就是這兩個情況中的最大值。
int robLinear(int* nums, int numsSize) {
    int * dp = (int *)malloc((numsSize + 1) * sizeof(int));

    // 初始化
    for(int i = 0; i <= numsSize; i++){
        dp[i] = 0;
    }
    dp[0] = 0;
    dp[1] = nums[0];

    //
    for(int i = 2; i <= numsSize; i++){
        int max_count = 0;
        for(int j = 0; j < i - 1; j++){
            max_count = max_count < dp[j] ? dp[j] : max_count;
        }
        dp[i] = nums[i - 1] + max_count;
    }

    int result = 0;

    for(int i = 0; i <= numsSize; i++){
        result = result < dp[i] ? dp[i] : result;
    }
    free(dp);

    return result;
}

int rob(int* nums, int numsSize) {
    if(numsSize == 1) return nums[0];
    int prev1 = 0;
    int prev2 = 0;

    prev1 = robLinear(nums, numsSize - 1);
    prev2 = robLinear(nums + 1, numsSize - 1);

    return fmax(prev1, prev2);
}
// @lc code=end


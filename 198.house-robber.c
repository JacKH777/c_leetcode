/*
 * @lc app=leetcode id=198 lang=c
 *
 * [198] House Robber
 */

// @lc code=start
int rob(int* nums, int numsSize) {
    if(numsSize == 1) return nums[0];

    int *dp = (int *)malloc((numsSize + 1) * sizeof(int));
    // 初始化
    for(int i = 1 ; i <= numsSize; i++){
        dp[i] = 0;
    }

    dp[0] = 0;
    dp[1] = nums[0];
    dp[2] = nums[1];

    // 找之前紀錄的最多錢(不能找前一家)
    for(int i = 3; i <= numsSize; i++){
        int max_j = 0;
        for(int j = 0;j < i - 1; j++){
            max_j = max_j < dp[j] ? dp[j]: max_j;
        }
        dp[i] = max_j + nums[i - 1];
    }

    int result = 0;
    for(int i = 0; i <= numsSize; i++){
            result = result < dp[i] ? dp[i]: result;
        }

    free(dp);
    return result;
}
// @lc code=end

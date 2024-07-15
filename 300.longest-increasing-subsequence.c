/*
 * @lc app=leetcode id=300 lang=c
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
int lengthOfLIS(int* nums, int numsSize) {
    if(numsSize == 1) return 1;
    int *dp = malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        dp[i] = 1;
    }

    // dp[0] = 1;

    // dp 紀錄每一個值所能有的最大嚴格遞增數量
    // 當在找dp[i]時，會找他前面比他小的值中最大的遞增數量(dp[j])並加1
    for(int i = 1; i < numsSize; i++){
        int max_dp_in_j = 1;
        for(int j = 0; j < i; j++){
            if(nums[i] > nums[j]){
                dp[i] = dp[i] < dp[j] + 1 ? dp[j] + 1 : dp[i];
            }
        }
    }

    // 找最大dp
    int max_count = 0;
    for(int i = 0; i < numsSize; i++){
        max_count = max_count < dp[i] ? dp[i] : max_count;
    }

    free(dp);

    return max_count;
}
// @lc code=end


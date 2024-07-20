/*
 * @lc app=leetcode id=377 lang=c
 *
 * [377] Combination Sum IV
 */

// @lc code=start
int combinationSum4(int* nums, int numsSize, int target) {
    unsigned int *dp = (unsigned int *)malloc((target + 1) * sizeof(unsigned int));
    // 初始化
    for(int i = 0; i <= target; i++){
        dp[i] = 0;
    }
    dp[0] = 1;

    // 把所有i >= nums[j]的dp加起來
    for(int i = 0; i <= target; i++){
        for (int j = 0; j < numsSize; j++){
            if(i >= nums[j]){
                dp[i] += dp[i - nums[j]];
            }
        }
    }

    int result = dp[target + 1];
    free(dp);

    return result; 
}
// @lc code=end


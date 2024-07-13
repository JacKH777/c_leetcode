/*
 * @lc app=leetcode id=338 lang=c
 *
 * [338] Counting Bits
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n+1;
    int *ans = malloc((n+1) * sizeof(int));
    
    for(int i = 0;i < n +1; i++){
        int num = i;
        int count = 0;
        while(num >= 2){
            if(num%2) count++;
            num /= 2;
        }
        if(num) count++;
        ans[i] = count;
    }

    return ans;
}
// @lc code=end


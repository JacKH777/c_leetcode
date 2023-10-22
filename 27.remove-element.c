/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val){
    int k = 0;
    int count = numsSize - 1;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            k++;
            for(int j = count; j > -1; j--){
                if(nums[j] != val){
                    nums[i] = nums[j];
                    count = j - 1;
                    break;
                }
            }
        }
    }
    return numsSize - k;
}
// @lc code=end


/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize){
    int k = 0;
    int check = -101;
    for(int i = 0;i < numsSize; i++){
        if(nums[i] != check){
            check = nums[i];
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

// @lc code=end


/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

// @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
    if(nums[0]>target) return 0;
    for(int i  = 0;i < numsSize;i++){
        if(nums[i] == target) return i;
        else if(nums[i] > target && nums[i-1] < target) return i;
    }
    return numsSize;
}
// @lc code=end


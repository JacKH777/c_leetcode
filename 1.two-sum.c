/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int find_num;
    *returnSize = 2;
    int *return_num = (int*)malloc(2*sizeof(int));
    for(int i = 0; i < numsSize; i++){
        find_num = target - nums[i];
        for(int j = i+1; j < numsSize; j++){
            if(j == i) break;
            if(nums[j] == find_num){
                return_num[0] = i;
                return_num[1] = j;
                return return_num;
            }
        }
    }
    return 0;
}
// @lc code=end

/*
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++) //不用重複
        {
            if (nums[i] + nums[j] == target)
            {
                *returnSize = 2; //指定答案大小
                int *rtn = (int *)malloc(2*sizeof(int));
                rtn[0] = i;
                rtn[1] = j;
                return rtn; //提早return
            }
        }
    }
    return NULL;
}
*/
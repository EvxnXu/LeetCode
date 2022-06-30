/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//bruteforce soultion

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * *returnSize); //malloc 2 integers for the two indices
    for(int i = 0; i < numsSize; i++)
    {
        for(int n = i + 1; n < numsSize; n++)
        {
            if(nums[n] + nums[i] == target)
            {
                ans[0] = n;
                ans[1] = i;
                break;
            }
        }
    }
    return ans;
}
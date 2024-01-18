/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int left = 0,right = 0;
    for(;right < numsSize;right ++)
    {
        if(nums[right] != val)
            nums[left++] = nums[right];
    }
    return left;
}
// @lc code=end

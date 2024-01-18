/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

//最简单的想法，从前至后遍历数组，遇到val的位置i将[i+1,end]向前移动,并赋值end位置为0或val
// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int newSize = numsSize;
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] == val)
        {
            for(int j = i + 1;j < newSize;j++)
                nums[j - 1] = nums[j];
            nums[numsSize - 1] = val;
            newSize --;i--;
        }
    }
    return newSize;
}
// @lc code=end

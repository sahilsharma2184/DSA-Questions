/*
LeetCode: 26. Remove Duplicates From Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
            }
            nums[i]=nums[j];
        }
        return i+1;
    }
};
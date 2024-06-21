/*
Leetcode: 1752. Check if array is sorted and rotated
Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
*/
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            count++;
        }
        if(nums[n-1]>nums[0])
        {count++;}

        if(count<=1)
        return true;
        else
        return false;
    }
};
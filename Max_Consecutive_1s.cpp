/*
Leetcode: 485. Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count=0,onecounts=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }   
            else
            {
                count=0;
            }
            onecounts=max(count,onecounts);
        }
        return onecounts;
    }
};
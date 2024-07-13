/*

Leetcode 53: Maximum Subarray
Link: https://leetcode.com/problems/maximum-subarray/description/

Solved using Kadane's Algorithm
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            
            sum=sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};

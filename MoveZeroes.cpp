/*
LeetCode: https://leetcode.com/problems/move-zeroes/ 
283. Move Zeroes
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};
/*
Initial state: nums = [0, 1, 0, 3, 12], i = 0
First iteration (j = 0): nums[0] is 0, so no swap, i remains 0.
Second iteration (j = 1): nums[1] is 1, swap nums[1] and nums[0] → nums = [1, 0, 0, 3, 12], i = 1.
Third iteration (j = 2): nums[2] is 0, so no swap, i remains 1.
Fourth iteration (j = 3): nums[3] is 3, swap nums[3] and nums[1] → nums = [1, 3, 0, 0, 12], i = 2.
Fifth iteration (j = 4): nums[4] is 12, swap nums[4] and nums[2] → nums = [1, 3, 12, 0, 0], i = 3.

*/
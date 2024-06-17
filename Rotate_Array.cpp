/*Leetcode:189. Rotate Array
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:                                              Example 2:

Input: nums = [1,2,3,4,5,6,7], k = 3                    Input: nums = [-1,-100,3,99], k = 2
Output: [5,6,7,1,2,3,4]                                 Output: [3,99,-1,-100]
Explanation:                                            Explanation: 
rotate 1 steps to the right: [7,1,2,3,4,5,6]            rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [6,7,1,2,3,4,5]            rotate 2 steps to the right: [3,99,-1,-100]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

/* without STL
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
};*/
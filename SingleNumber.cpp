/*
LeetCode: 136. Single Number
Link: https://leetcode.com/problems/single-number/description/
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int e=0;
        for(auto i:nums)
        {e=e^i;}
        return e;
    }
};
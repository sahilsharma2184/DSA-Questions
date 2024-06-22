/*
LeetCode: 169. Majority Element
Link: https://leetcode.com/problems/majority-element/
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int criteria=nums.size()/2;
        unordered_map<int,int> a;
        for(auto i:nums)
        {
            a[i]++;
            if(a[i]>criteria)
            return i;
        }
        return -1;
    }
};
/*Leetcode:-268. Missing Number
Link: https://leetcode.com/problems/missing-number/
*/
#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0,o;
        int n=nums.size();
        int f=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
           s=s+nums[i];
        }
        if(s!=f)
        o=abs(f-s);
        return o;
    }
};
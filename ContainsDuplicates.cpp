/*
Leetcode: 217. Contains Duplicate
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> order; //key,value=> key=number, value=count
        for(int i:nums)
        {
            order[i]++;
            if(order[i]>1)
            {
                return true;
            }
        }
        return false;
    }
};
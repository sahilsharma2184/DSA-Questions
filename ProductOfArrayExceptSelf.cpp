/*
Leetcode: 258. Product of array except self
Link:  https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int size=nums.size();
    vector<int>ans(size);   
    vector<int>left(size);   
    vector<int>right(size);   

    left[0]=1;
    for(int i=1;i<size;i++)
    {
        left[i]=left[i-1]*nums[i-1];
    }

    right[size-1]=1;
    for(int i=size-2;i>=0;i--)
    {
        right[i]=right[i+1]*nums[i+1];
    }

    for(int i=0;i<size;i++)
    {
        ans[i]=left[i]*right[i];
    }

    return ans;

    }
};
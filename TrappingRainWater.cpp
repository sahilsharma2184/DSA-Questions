/*
Leetcode: 42. Trapping Rain Water
Link: https://leetcode.com/problems/trapping-rain-water/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        left[0]=height[0];
        int sum=0;
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],height[i]);
        }
        for(int i=0;i<n;i++)
        {
            sum+=min(left[i],right[i])-height[i]; //main formula, min of left and right block, subtract the current block height from the min;
        }
        return sum;
    }
};
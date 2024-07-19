/*
Greedy Problem
Leetcode: 45. Jump Game(II)
Link: https://leetcode.com/problems/jump-game-ii/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int destination=nums.size()-1;
        int window=0;
        int lastjump=0;

        if(nums.size()==1) //base case if the vector is of size 1
        {
            return 0;
        }

        for(int i=0;i<nums.size();i++)
        {
            window=max(window ,i+nums[i]);

            if(i==lastjump)
            {
                lastjump=window;
                jump++;
            if(window>=destination)
            {
                return jump;
            }
            }
        }

    return jump;
    }
};
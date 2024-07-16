/*
Leetcode: 155 Jump Game
Link: https://leetcode.com/problems/jump-game/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int reachable=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(i>reachable)
            {
                return false;
            }
            
            reachable=max(i+nums[i],reachable);
            
            
        }
        return true;
    }
};
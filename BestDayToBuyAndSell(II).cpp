/*
Leetcode: 122 Best Day to buy and sell (II)
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                profit=profit+prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};
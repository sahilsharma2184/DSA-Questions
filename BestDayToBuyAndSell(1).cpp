/*
Leetcode:121 Best Day to Buy and Sell
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //using Kadane's Algorithm
        int buy_day=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(buy_day>prices[i])
            {
                buy_day=prices[i];
            }
            else if(prices[i]-buy_day>profit)
            {
                profit=prices[i]-buy_day;
            }
        }
        return profit;
    }
};
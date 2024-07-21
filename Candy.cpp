/*
Leetcode: 135. Candy
Link: https://leetcode.com/problems/candy/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=0;
        vector<int>left(n,1); //left array of same size as of ratings array, with all its values as 1 intially
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                left[i]=left[i-1]+1;
            }
        }
        vector<int>right(n,1); //right array of same size as of ratings array, with all its values as 1 intially
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                right[i]=right[i+1]+1;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=max(left[i],right[i]);
        }
        return sum;
    }
};
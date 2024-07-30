/*
Leetcode: 2149. Rearrange Array Elements By Sign
Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
*/
/*
using 2 additional arrays
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int>positive;
    vector<int>negative;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            positive.push_back(nums[i]);
        }
        else
        {
            negative.push_back(nums[i]);
        }
    }

    for(int i=0;i<positive.size();i++)
    {
        nums[2*i]=positive[i];
        nums[2*i+1]=negative[i];
    }
    return nums;
    }
};
*/

//using 1 additional array
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int positive=0;
    int negative=1;
    vector<int>result(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
            result[positive]=nums[i];
            positive+=2;
        }
        else
        {
            result[negative]=nums[i];
            negative+=2;
        }
    }
    return result;
    }
};

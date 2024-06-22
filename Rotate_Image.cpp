/*
LeetCode: 48. Roatate Image
Link: https://leetcode.com/problems/rotate-image/description/
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int r=matrix.size();
        int c=matrix[0].size();
        vector<int>ans;
        for(int i=0;i<r;i++)
        {
            for(int j=i;j<c;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
              reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};
    
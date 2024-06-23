/*
54. Spiral Matrix
Link. https://leetcode.com/problems/spiral-matrix/
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<int>ans;

        int startrow=0;
        int startcol=0;
        int endrow=row-1;
        int endcol=col-1;

        if(matrix.empty() || matrix[0].empty()) //if row is empty or column is empty
        {
            return ans;
        }

        while(startrow<=endrow && startcol<=endcol)
        {
            //print starting row-> start from starting col till ending col of 1st row
            for(int i=startcol;i<=endcol;i++) 
            {
                ans.push_back(matrix[startrow][i]); 
            }
            startrow++;

            //print lastcolumn-> start from startrow till ending row
            for(int i=startrow;i<=endrow;i++)
            {
                ans.push_back(matrix[i][endcol]);
            }
            endcol--;

            //print lastrow-> start from endcol till start col
            if (startrow <= endrow) //checking if rows are remaining or not
            {
                for(int i=endcol;i>=startcol;i--)
                {
                    ans.push_back(matrix[endrow][i]);
                }
                endrow--;
            }

            //print startcol-> startb from endrow till startrow
            if (startcol <= endcol) //checking if columns are remaining or not
            { 
                for(int i=endrow;i>=startrow;i--)
                {
                    ans.push_back(matrix[i][startcol]);
                }
                startcol++;
                }
        }
        return ans;
    }
};
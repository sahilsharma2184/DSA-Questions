/*
CodingNinjas: Print Like Wave
Link: https://www.naukri.com/code360/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTabValue=PROBLEM
*/
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>res;
    //Write your code here
    for(int j=0;j<mCols;j++)
    {
        if(j%2==0)
        {
          for (int i = 0; i < nRows; i++) {
            res.push_back(arr[i][j]);
          }
        } 
        else 
        {
            for (int i = nRows - 1; i >= 0; i--) 
            {
            
            res.push_back(arr[i][j]);
            }
        }
    }
    return res;
}
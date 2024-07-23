/*
Leetcode: 58. Length of Last Word
Link: https://leetcode.com/problems/length-of-last-word/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
     int n=s.size();
     int c=0;
     int i=n-1;
     while(i>=0&&s[i]==' ')
     {
        i--;
     }
     for(;i>=0 && s[i]!=' ';i--)
     {
        c++;
     }   
     return c;
    }
};

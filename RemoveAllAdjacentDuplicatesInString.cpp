/*
Leetcode: 1047. Remove All Adjacent duplicates from string
*/
class Solution {
public:
    string removeDuplicates(string s) {
        int j;
        for(int i=0;i<s.size();i++)
        {
            j=i+1;
            if(s[i]!=s[j])
            {
                continue;
            }
            else
            {
                s.erase(s.begin()+i,s.begin()+j+1); //s.begin()+j+1 because s.erase works like s.erase[first,last)
                i=-1; //because in the loop it gets back to 0 after i++
            }
        }
        return s;
    }
};
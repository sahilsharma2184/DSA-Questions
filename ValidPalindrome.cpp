/*
LeetCode: https://leetcode.com/problems/valid-palindrome/
125. Vaid Palindrome
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end)
        {
            if(isalnum(s[start])==0)
            {
                start++;
            }

            else if(isalnum(s[end])==0)
            {
                end--;
            }
            else
            {
                if(tolower(s[start])==tolower(s[end]))
                {
                    start++;
                    end--;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
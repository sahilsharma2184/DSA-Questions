#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<ch[i];
    }
}
int main()
{
    char ch[20];
    int n=5;
    cout<<"Enter name \n";
    cin>>ch;
    reverse(ch,n);
    return 0;
}

/*
Leetcode:344-Reverse String: https://leetcode.com/problems/reverse-string/description/ 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        while(e>st)
        {
            swap(s[st++],s[e--]);
        }
    }
};
*/
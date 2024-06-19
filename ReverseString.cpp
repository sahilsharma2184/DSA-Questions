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
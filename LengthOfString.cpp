#include<bits/stdc++.h>
using namespace std;
int getLength(char ch[])
{
    int count=0;
    for(int i=0; ch[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[100];
    cout<<"Enter name \n";
    cin>>ch;
    cout<<"Length of "<<ch<<" is "<<getLength(ch);
    return 0;
}
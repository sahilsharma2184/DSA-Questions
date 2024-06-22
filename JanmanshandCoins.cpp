/*
CodeChef: Janmansh and Coins
Link: https://www.codechef.com/problems/JCOINS
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int total=0;
        cin>>x>>y;
        total=(x*10)+(y*5);
        cout<<total<<endl;
    }
    return 0;
}

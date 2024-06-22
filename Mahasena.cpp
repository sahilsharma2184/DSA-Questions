/*
CodeChef: Mahasena
Link: https://www.codechef.com/problems/AMR15A 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,x,c=0,d=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>x;
	    if(x%2==0)
	    c++;
	    else
	    d++;
	}
	if(c>d)
	cout<<"READY FOR BATTLE"<<endl;
	else
	cout<<"NOT READY"<<endl;

}

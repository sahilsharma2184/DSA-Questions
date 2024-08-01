/*
Link: https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=PROBLEM
*/
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
	string add="@40";
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==' ')
		{
			str.replace(i,1,add); //ith position space which is a single space character to be replaced with add staring
			i=i+3; //since length of 'add' is 3
		}
	}
	return str;
}
/*CodingNinjas- Replace Spaces
Link: https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=PROBLEM

*/
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    string res;
    for(int i=0;i<str.size();i++)
    {
      if (str[i] == ' ') {
        res.push_back('@');
        res.push_back('4');
        res.push_back('0');
      } else
        res.push_back(str[i]);
    }
    return res;
}
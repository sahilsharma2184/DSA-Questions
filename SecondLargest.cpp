/*GFG:-Second Largest
https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

Given an array Arr of size N, print the second largest distinct element from an array. If the second largest element doesn't exist then return -1.
Example 1:
Input: 
N = 6
Arr[] = {12, 35, 1, 10, 34, 1}
Output: 34
Explanation: The largest element of the 
array is 35 and the second largest element
is 34.*/
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int c=-1,cc=-1;
	    for(int i=0;i<n;i++)
	    {
	        c=max(arr[i],c);
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=c)
	        {
	            cc=max(arr[i],cc);
	        }
	        
	    }
	    return cc;
	}
};
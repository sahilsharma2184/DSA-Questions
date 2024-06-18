/*GFG:- Largest Element in Array
Given an array A[] of size n. The task is to find the largest element in it.
 
Example 1:
Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90.*/
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int c=0;
           for(int i=0;i<n;i++)
           {
               if(arr[i]>c)
               c=arr[i];
           }
           return c;
        }
};
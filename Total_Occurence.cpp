/*Question:- Find total number of occurences of an element in an array*/
#include<bits/stdc++.h>
using namespace std;
int firstOccur(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int res=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            res=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return res;
}
int lastOccur(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int res=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            res=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return res;
}
int main()
{
     int arr[7]={1,2,3,3,3,3,5};
    int n=7;
    int key=3;
    int f=firstOccur(arr,n,key);
    int l=lastOccur(arr,n,key);
    cout<<"Total occurences: "<<l-f+1<<endl;
    return 0;
}
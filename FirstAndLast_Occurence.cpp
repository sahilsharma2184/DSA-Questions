/*Question:- Find the first and last occurence of an element in an array*/
#include<bits/stdc++.h>
using namespace std;
int firstmost(int arr[],int n,int key)
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
int lastmost(int arr[],int n,int key)
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
    int arr[12]={1,3,3,3,3,3,5,5,6,6,7,8};
    int key=3;
    int n=12;
    int f=firstmost(arr,n,key);
    int l=lastmost(arr,n,key);
    cout<<"First occurence at "<<f<<endl;
    cout<<"Last occurence at "<<l<<endl;

    return 0;

}
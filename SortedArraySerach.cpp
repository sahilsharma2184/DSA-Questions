/*
GeeksForGeeks:https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win
Qs.: Sorted Array Search
*/
int searchInSorted(int arr[], int N, int K) 
    { 
    
        if(binary_search(arr,arr+N,K))  
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
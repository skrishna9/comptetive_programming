#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key )
{
    int s =0;
    int end =n;
    while(s<=end)
    {
        int mid = (s+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"enter the key you want to search :";
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
}
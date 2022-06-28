#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    const int N =1e6 +2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minindx =INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minindx =min(minindx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    if(minindx==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<minindx+1;
    }
    return 0;
}
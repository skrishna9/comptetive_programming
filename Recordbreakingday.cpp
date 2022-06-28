#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n+1];
    arr[n] =-1;
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
        
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    
    int recordbreakingday =0;
    int mx = -1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx&& arr[i]>arr[i+1])
        {
            recordbreakingday++;
        }
        mx =max(mx,arr[i]);
    }
    cout<<recordbreakingday;
}
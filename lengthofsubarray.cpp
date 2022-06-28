#include<bits/stdc++.h>
using namespace std ;
int subarray(vector<int>v,int n)
{
    int ans =2;
    int pd = v[0]-v[1];
    int curr =2;
    int j=2;
    while(j<n)
    {
        if(pd == v[j]-v[j-1])
        {
            curr++;
        }
        else
        {
            pd=v[j]-v[j-1];
            curr =2;
        }
        ans = max(ans,curr);
        
        j++;
    }
    return ans;
}
int main()
{
    int n,x;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    cout<<subarray(v,n);
}
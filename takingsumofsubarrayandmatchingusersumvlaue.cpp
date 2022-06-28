#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;
    int x;
    cin>>n>>s;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    int i=0,j=0,st=-1,ed=-1;
    int sum =0;
    while(j<n && sum+v[j]<=s)
    {
        sum +=v[j]; 
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    
    while(j<n)
    {
        sum +=v[j];
        while(sum>s)
        {
            sum -= v[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            ed=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<ed<<endl;
    

    return 0;
}

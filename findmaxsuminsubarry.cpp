#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    int maxsum =INT_MIN;
    for(int i =0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum =0;
            for(int k=i;k<=j;k++)
            {
                sum +=v[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}

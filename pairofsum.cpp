/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//s:- sum which is given from user;
#include <bits/stdc++.h>

using namespace std;

bool pairsum(vector<int>v, int n, int k)
{
    int start =0;
    int end =n-1;
    while(start<end)
    {
        if(v[start]+v[end]==k)
        {
            cout<<start<<" "<<end<<endl;
            return true;
        }
        else if(v[start]+v[end]>k)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return false;
}

int main()
{
   int n;
   cin>>n;
   int k;
   cin>>k;
   int x;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }
   sort(v.begin(),v.end());
   cout<<pairsum(v,n,k)<<endl;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int>v;
   int x;
   for(int i=0;i<n;i++)
   {
        cin>>x;
        v.push_back(x);
   }
   const int N = 1e6+2;
   bool check[N];
   for(int i=0;i<N;i++)
   {
       check[i]=false;
   }
   for(int i=0;i<n;i++)
   {
       if(v[i]>=0)
       {
            check[v[i]] = 1;
       }
      
   }
   
   int ans =-1;
   for(int i=1;i<N;i++)
   {
       if(check[i]==0)
       {
           ans =i;
           break;
       }
   }
   cout<<ans<<endl;
    return 0;
}

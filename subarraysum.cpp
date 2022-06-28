#include <iostream>
#include<bits/stdc++.h>
using namespace std;

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
  int count =0;
  for(int i=0;i<n;i++)
  {
      count =0;
      for(int j=i;j<n;j++)
      {
          count +=v[j];
          cout<<count<<endl;
      }
  }
 
   return 0;
}
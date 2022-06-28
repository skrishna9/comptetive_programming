#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int m =n;
    while(n>0)
    {
        n =n/3;
        m +=n;
    }
    if(m%2==0)
    {
        cout<<m;
    }
    else
    {
        cout<<m+1;
    }
}
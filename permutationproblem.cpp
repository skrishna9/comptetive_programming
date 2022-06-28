#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"enter the value of n and r: ";
    cin>>n>>r;
    int permutation = fact(n)/fact(n-r);
    cout<<permutation<<endl;
}

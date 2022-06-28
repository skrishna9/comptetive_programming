#include<bits/stdc++.h>
using namespace std;
void facb(int n)
{
    int f1=0;
    int f2 =1;
    int nextvalue;
    for(int i=1;i<=n;i++)
    {
        cout<<f1<<endl;
        nextvalue =f1+f2;
        f1=f2;
        f2=nextvalue;
    }
    return;
}
int main()
{
    int n;
    cout<<"enter the size of fabbinoic number. ";
    cin>>n;
    facb(n);
}
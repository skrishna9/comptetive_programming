#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int a;
    int b;
    cout<<"enter the range that you want to check weather it is prime or not: ";
    cin>>a>>b;
    for(int i=a; i<=b;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
}
 
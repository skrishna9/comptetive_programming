#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n)
{
    int decimal =0;
    int x =1;
    while(x<=n)
    {
        x *=2;
      
    }
    x /=2;
    while(x>0)
    {
        int lastdigit = n/x;
        n -=lastdigit*x;
        x /=2;
        decimal = decimal*10 +lastdigit;
    }
    return decimal;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    
}
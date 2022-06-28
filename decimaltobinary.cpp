#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
    int decimal =0;
    int x =1;
    while(n>0)
    {
        int y =n%10;
        decimal +=x*y;
        x *= 2;
        n =n/10;
    }
    return decimal;
}
int main()
{
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
    
}
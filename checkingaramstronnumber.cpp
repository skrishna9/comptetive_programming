#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number that u want to check weather it is armstong number or not: ";
    cin>>n;
    int sum =0;
    int originaln =n;
    while(n>0)
    {
        int endelement = n%10;
        sum+=pow(endelement,3);
        n =n/10;
    }
    if(sum==originaln)
    {
        cout<<"it is a Aramstrong number. "<<endl;
    }
    else
    {
        cout<<"Not Aramstrong"<<endl;
    }
}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number you want to find a factorial: ";
    cin>>n;
    int factorial=1;
    while(n>0)
    {
        
        factorial=factorial*n;
        n--;
    }
    cout<<factorial;
}
#include <iostream>

using namespace std;

int main()
{
    long long k ;
    cin>>k;
    while (true)
    {
        cout<<k<<" ";
        if(k==1) 
           break;
        if(k%2==0)
           k/=2;
        else 
          k=k*3+1;
        
           
    }
    cout<<"\n";
}

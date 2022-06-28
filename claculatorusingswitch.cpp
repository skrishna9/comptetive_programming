#include<iostream>
using  namespace std;
int main()
{
    int a, b;
    cout<<"enter the value that u want to calculate: ";
    cin>>a>>b;
    
    char op;
    cout<<"enter the icon you want to perform operation: ";
    cin>>op;
    
    switch(op)
    {
        case '+':
            cout<<a+b<<endl;
            break;
            
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break; 
        case '%':
            cout<<a%b<<endl;
            break;
        default:
            cout<<"i am still learning:"<<endl;
            break;
            
    }
    return 0;
}
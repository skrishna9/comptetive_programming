#include<iostream>
using  namespace std;
int main()
{
    char b;
    cout<<"enter the charcater that u want to know weather it is vowel or consunent: ";
    cin>>b;
    
    switch(b)
    {
        case 'a':
            cout<<"it is a vowel"<<endl;
            break;
            
        case 'e':
            cout<<"it is a vowel"<<endl;
            break;
        case 'i':
            cout<<"it is a vowel"<<endl;
            break;
        case 'o':
            cout<<"it is a vowel"<<endl;
            break; 
        case 'u':
            cout<<"it is a vowel"<<endl;
            break;
        default:
            cout<<"it is consunent:"<<endl;
            break;
            
    }
    return 0;
}
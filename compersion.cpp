#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n*2;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n*2;i+2)
    {
        if(v[i]>v[i+1])
        {
            cout<<"FIRST";
            break;
        }
        else if(v[i]==v[i+1])
        {
            cout<<"ANY";
            break;
        }
        else
        {
            cout<<"SECOND";
            break;
        }
    }
    
	return 0;
}
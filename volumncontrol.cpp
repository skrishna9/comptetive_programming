#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x,y;
	while(n--)
	{
	    cin>>x>>y;
	    int op;
	    op =x-y;
	    cout<<abs(op)<<endl;
	}
	return 0;
}
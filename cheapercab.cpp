#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x,y;

	while(n--)
	{
	    cin>>x>>y;
	    if(x<y)
	    {
	        cout <<"FIRST"<<endl;
	        
	    }
	    else if(x>y)
	    {
	        cout<<"SECOND"<<endl;
	        
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	       
	    }
	}
	
    
    
	return 0;
}
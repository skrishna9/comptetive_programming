#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int y = 1;
    for(int j=0;j<n;j++)
    {
        if(v[j] == y){
        y++;
        
        }
        else
        {
            cout<<y;
            return 0;
        }
    }
}
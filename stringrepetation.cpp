#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long cnt=1;
    getline(cin,s);
    vector<int>v;
    sort(s.begin(),s.end());
    for(int j=0;j<s.length();j++){
        if(s[j] == s[j+1]){
            cnt++;
        }
        else{
            v.push_back(cnt);
            cnt = 1;
        }
    }
    sort(v.begin(),v.end());
    int l = v.size();
    cout<<v[l-1];
}
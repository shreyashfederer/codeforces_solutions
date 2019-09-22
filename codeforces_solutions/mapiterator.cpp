#include<bits/stdc++.h>
using namespace std;
map<string, string> m;
int main() {
    m["purple"]="Power";
    m["green"]="Time";
    m["blue"]="Space";
    m["orange"]="Soul";
    m["red"]="Reality";
    m["yellow"]="Mind";
    int n; cin>>n;
    for(int i=0; i<n; ++i) {
        string s; cin>>s;
        m.erase(s);
    }
    cout<<m.size()<<endl;
    for(auto it:m)
        cout<<it.second<<endl;
    return 0;
}
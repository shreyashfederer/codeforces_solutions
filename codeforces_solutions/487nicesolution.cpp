#include<bits/stdc++.h>
 using namespace std; 
 int main() {
 string s; 
 cin>>s; 
 int n=s.size()-2;
  for(int i=0;i<n;i++) { 
  string s2=s.substr(i,3); sort(s2.begin(),s2.end()); 
  if(s2=="ABC") return cout<<"yes",0; 
  } 
  cout<<"no"; 
  }
#include <bits/stdc++.h>
using namespace std;

int main() {

string s1;
cin>>s1;

//cout<<s1;

int len=s1.length();


for(int i=0;i<(len-2);i++ )
{
    if(s1[i]=='A' || s1[i]=='B' || s1[i]=='C'){
        int var=s1[i];
        
        if((s1[i+1]=='A' || s1[i+1]=='B' || s1[i+1]=='C') && (s1[i+1]!=var)){
            int var1=s1[i+1];
            
            if((s1[i+2]=='A' || s1[i+2]=='B' || s1[i+2]=='C' )&&(s1[i+2]!=var1 &&s1[i+2]!=var)){
                cout<<"Yes";
                return 0;
                
                
            }
        }
      
    }
   
    
}
cout<<"No";


 	return 0;
}
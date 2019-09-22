
// Sample code to perform I/O:

#include <bits/stdc++.h>
using namespace std;

int main() {

string s;
cin>>s;
int len=s.length();
int ans=0;

for(int i=0;i<len;i++){
    ans= 0;
    
    for(int j=i;j<len;j++){
        
        if(s[j]%2==0){
       //  cout<<j<<endl;
         
            
            ans++;
            
        }
    }
    
    cout<<ans;
    cout<<" ";
    
}


	
		return 0;
		
		
}





#include <bits/stdc++.h>
using namespace std;


int main() 
{
    
int n,ans=INT_MAX;
cin>>n;

string s;
cin>>s;
string req= "ACTG";

for(int i=0;i<n-3;i++)
{
    
    //string temp = s.substr(i,4);
   
   int cnt=0;
   
    for(int j=0;j<4;j++)
    {
        
        if(s[i+j]!=req[j])
        {
            int k = abs((s[i+j]-'A') - (req[j]-'A'));
            
            cnt+= min(k,26-k);
            
 //cout<<cnt<<endl;
            
        }
    
        
    }
   
    
    if(cnt<ans)
    {
        ans=cnt;
        
        
    }
    
}
    

cout<<ans;




	return 0;
}
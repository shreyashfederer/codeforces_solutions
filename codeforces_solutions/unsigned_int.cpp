#include <bits/stdc++.h>
using namespace std;


int main() 

{

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

unsigned long long int t,ans,temp,cnt,k;
cin>>t;

while(t--)
{
    
    unsigned long long int n;
    cin>>n;
    ans=n,temp=0,cnt=0;
    k=0;
    
    while(n!=0)
    {
        temp = n%10;
        cnt = cnt+temp;
        n = n/10;
        
    }
    
    if(cnt%10==0)
    {
        ans = ans*10;
        
    }
    else
    {
    k = 10 - cnt%10;
    
    ans = ans*10+k ;
    }
    
    cout<<ans<<endl;
    
 
 
}

	return 0;
}
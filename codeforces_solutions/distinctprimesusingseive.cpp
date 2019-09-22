#include <bits/stdc++.h>
using namespace std;
 
long long factorCount[1000007];
bool prime[1000007];
 
int main()
{
    long long i,j,t,n,m,ans;
 
    for (i = 0; i <= 1000006; i++) {
        factorCount[i] = 0;
        prime[i]=true;
    }
 
    for (i = 2; i <= 1000006; i++) {
        if (prime[i]==true) { // Number is prime
        	factorCount[i]=1;
            for (j = i*2; j <= 1000006; j += i) {
                factorCount[j]++;
                prime[j]=false;
            }
        }
    }
    cin>>t;
    while(t--)
    {
      cin>>n>>m;
      ans=0;
      for(i=n;i<m;i++)
      {
        ans+=factorCount[i];
      }
      cout<<ans<<endl;
    }
    return 0;
}  
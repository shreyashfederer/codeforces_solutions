#include <bits/stdc++.h>
using namespace std;


int main()

{

string s;
cin>>s;

int n=s.size();

vector<int>req(n,0);

int cnt=0;

for(int i=0;i<n;i++)
{
    if(s[i]=='4')
    {
        s[i]='3';
        
        if(cnt==0)
        {
        cnt = i;
        }
        req[i] = 1;
        
    }
    
}

cout<<s<<endl;


for(int i=cnt;i<req.size();i++)
{
    cout<<req[i];

}

	return 0;
}
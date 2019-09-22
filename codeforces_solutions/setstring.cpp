#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<string>ans;
	for(int i=1;i<=n;i++)
	{
		string str;
		
		cin>>str;
		sort(str.begin(),str.end());
		
		
		ans.insert(str);
	}
	cout<<ans.size()<<"\n";
	return 0;
}
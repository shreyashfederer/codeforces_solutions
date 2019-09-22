#include <bits/stdc++.h>
using namespace std;
int n,fr[26][26],mx,x,y;
char s[101];
int main(){
	scanf("%d",&n);
	scanf("%s",s);
	for(int i=0;i<n-1;++i)
		++fr[s[i]-'A'][s[i+1]-'A'];
	for(int i=0;i<26;++i)
		for(int j=0;j<26;++j)
			if(mx<fr[i][j])
				x=i,y=j,mx=fr[i][j];
	printf("%c%c\n",(char)(x+'A'),(char)(y+'A'));
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
int n; string s;
cin >> n >> s;
vector <int> X(n-1,0);
for (int i=0; i<n-1; i++)
{
for (int j=0; j<n-1; j++)
{
 if (s.substr(i,2)==s.substr(j,2))
X[i]++;
}
}
int max=0;
for (int i=0;i<n-1; i++)
{
if (X[max]<X[i]) max = i;
}
cout << s.substr(max,2) << endl;
return 0;
}



#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main(){
	int n;
	cin>>n;
	string s,mx="";
	cin>>s;
	for (int i=0;i<n-1;i++){
		string s1=s.substr(i,2);
		mp[s1]++;
		if (mp[s1]>mp[mx]||mx=="") mx=s1;
	}
	cout<<mx;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n, a[30][30], b;
string s;
char c, d;
main ()
{
	cin>>n; cin>>s;
	for (int i=0; i<n-1; i++)
	a[s[i]-'A'][s[i+1]-'A']++;
	for (int i=0; i<30; i++)
	for (int j=0; j<30; j++)
	if (a[i][j]>b) b=a[i][j], c='A'+i, d='A'+j;
	cout<<c<<d<<endl;
}

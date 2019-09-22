#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,m;
char g[105][105];

bool check(int x,int y,int num){
	int sum=0;
	for(int i=x-1;i<=x+1;i++){
		for(int j=y-1;j<=y+1;j++){
			if(g[i][j]=='*') sum++;
		}
	}
	return sum==num;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
			if(g[i][j]=='.') g[i][j]='0';
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(g[i][j]>='0'&&g[i][j]<='8'){
				bool flag=check(i,j,g[i][j]-'0');
				if(flag==false){
					cout<<"NO"<<endl;
					return 0;
				}
			}
			
		}
	}
	cout<<"YES"<<endl;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
	int t;cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	while(t--){
		string s; cin >> s;
		int ans = 0;
		if(s.size() < 4){
		    cout << "normal" << endl;
		    continue;
		}
		for(int i = 0;i < s.size()-3;++i){
			int j = i;string str;
			while(j<i+4){
				str += s[j];j++;
			}
			sort(str.begin(),str.end());
			if(str == "cefh")
				ans++;
		}
		if(ans)
			cout << "lovely" << " " << ans << endl;
		else
			cout << "normal" << endl;
		
	}
	return 0;
} 
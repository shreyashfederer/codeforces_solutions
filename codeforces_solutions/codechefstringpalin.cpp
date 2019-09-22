#include <bits/stdc++.h>

using namespace std;


int main() {

int t;
cin>>t;
while(t--){

string s1;
cin>>s1;
int ans=0;

int cnt[26] ={0};
int cnt1[26] ={0};


int len=s1.length();


    for(int i=0;i<len/2;i++){
        
        cnt[s1[i]-'a']++;
        
    }
    if(len%2==0){
         for(int i=len/2;i<len;i++){
        
        cnt1[s1[i]-'a']++;
         }
         
    }
    else{
         for(int i=len/2+1;i<len;i++)
         {
        
        cnt1[s1[i]-'a']++;
        
    }
    }
    
    
for(int i=0;i<26;i++){

if(cnt[i]==cnt1[i] ){
    ans++;
    
}
    
}

if(ans==26){
    cout<<"YES";
    
}
else{
    cout<<"NO";
    
}
cout<<endl;

}


	return 0;
}
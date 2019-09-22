#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
	long t;
	cin >> t;
	
	while(t--){
	
   long n;
   cin>>n;
   long k=(2*n)+2;
 //  cout<<k;
   
   vector<long>a(k);
   for(int i=0;i<k;i++){
       cin>>a[i];
       
   }
 vector<int>c;
 
		unordered_map<int, int> hm;
	for (int i=0; i<k; i++)
		hm[a[i]]++;

	int ans=0;
	int ans1=0;
	int flag=0;
	
	for (auto x : hm)
{
   if(x.second%2==0){
       ans++;
       
   }
   else if(x.second%2==1 && (x.second!=1)){
       ans1++;
       c.push_back(x.first);
       
      
   }
    if(x.second==1){
        ans1++;
       c.push_back(x.first);
       
    }
}
int s=c.size();
sort(c.begin(),c.end());

	
	    for(int i=0;i<s;i++){
	        cout<<c[i]<<" ";
	        
	    
	}
	cout<<endl;
	
	}
	return 0;
}   
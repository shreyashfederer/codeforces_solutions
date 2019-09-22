#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int  n;
	cin>>n;
	vector<int>a(n);
	vector<int>::iterator it;
 
       	for(int i=0;i<n;i++){
	    cin>>a[i];
	    
	}

sort(a.begin(),a.end());

while(1){
    if(a.size()==1 || n==1 ){
        cout<<a[0];
        return 0;
        
    }
    int k=a.size();
  
    a.erase(a.begin()+k-1);
     int s=a.size();
   //  cout<<s<<endl;
     
     if(s>1){
      //   it=a.begin();
          a.erase(a.begin());
     }
    
    
}

	return 0;
}
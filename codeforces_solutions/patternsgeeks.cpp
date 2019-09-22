
/*

Input: 12345
Output:
1       5
  2   4
    3
  2   4
1       5 

Input: geeksforgeeks
Output:
g                         s
  e                     k
    e                 e
      k             e
        s         g
          f      r
             o
          f     r
        s         g
      k             e
    e                 e
  e                      k
g                          s 
*/


#include <iostream>
using namespace std;

int main() {
	char a[7][7];
	string s;
	cin>>s;
	int n=s.length();
	
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        a[i][j]=0;
	        
	    }
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(i==j){
	            a[i][j]=s[i];
	            a[n-i-1][j]=s[i];
	            
	        }
	        
	        
	    }
	}
	
		for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        {
	            cout<<a[i][j]<<" ";
	            
	        }
	        
	        
	        
	    }
	    cout<<endl;
	}
	return 0;
}
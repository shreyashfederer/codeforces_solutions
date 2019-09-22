#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int n,x,cnt=0;
	cin>>n>>x;
	
	vector<int>a(n);
	map<int,int> mp;
	
	for(int i=0;i<n;i++)
	{
	    
	    cin>>a[i];
	    mp[a[i]] = i;
	    
	    
	}
	
	sort(a.begin(),a.end());
	
	int i=0;
	
	while(i<n)
	{
	    
	    
	    int j = i+1 ; 
	    int k=n-1;
	    
	    while(j<k)
	    
	    {
	        
	       int prod = a[i]*a[j]*a[k];
	     //  cout<<prod<<endl;
	       
	       if(prod==x)
	       {
	            cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
	       //    i++;
	           j++;
	           k--;
	           cnt++;
	         
	          
	           
	       }
	       else if(prod>x)
	       {
	           k--;
	           
	       }
	       else if(prod<x)
	       {
	           j++;
	           
	       }
	        
	    }
	   i++;
	   
	    
	    
	}
	
	
	cout<<cnt;
	
	
	
	
	
	return 0;
}
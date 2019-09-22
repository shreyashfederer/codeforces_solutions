#include <bits/stdc++.h>
using namespace std;


int multiply(int a,int b,int c)
{
    
    return ((a%c * b%c  )%c);
    
    
    
}

int gcd(int a,int b)
{
  /*  int k = a;
    
    a = max(a,b);
    b = min(k,b);*/
 //   cout<<a<<" "<<b;
    
    
    int temp =0;
    
    while(1)
    {
        temp = a%b;
        
        if(temp==0)
        {
            return b;
            
        }
        
        a= b;
        b = temp;
        
    }
    return b;
    
}

int power(int a,int b,int c)
{
   
   int ans = 1;
   
   while(b>0)
   {
       if(b%2!=0)
       {
           ans = multiply(ans,a,c);
           
       }
       
       a = multiply(a,a,c);
       b= b/2;
       
       
       
   }
   
   return ans;
   
   
    
}


int main() 



{
	
	
	long long int p,q,msg,e,d,n,phi;
	cin>>p>>q>>msg;
	
	n=p*q;
	phi = (p-1)*(q-1);
	
		 e=2;
	
	while(e<phi)
	{
	    if(gcd(e,phi)==1)
	    {
	        break;
	        
	    }
	    e++;
	    
	}

cout<<"e is : "<<e<<endl;

int j=1;

while(1)
{
    d = (1+phi*j)/e;
    
    if(e*d % phi == 1 )
    {
        break;
        
    }
    
    j++;
    
    
    
}

cout<<"d is : "<<d<<endl;	

cout<<"msg is : "<<msg<<endl;	
	
	
	int ency = power(msg,e,n);
	
cout<<"encryption is : "<<ency<<endl;	
	
	int decy = power(ency,d,n);
	cout<<"decryption is : "<<decy<<endl;	
	
	return 0;
}
/*package whatever //do not write package name here */

import java.io.*;
import java.util.Scanner; 
class GFG 
{
    
    static int check(String color,String number)
    {
      
        if(color.charAt(0)!= 'r' )
       {
          
          return 0;
          
           
       }
       if(color.charAt(1)!= 'g' )
       {
          
           return 0;
           
       }
       if(color.charAt(2)!= 'b' )
       {
           
           return 0;
           
           
       }
        
        String[] temp = number.split("\\,");
        
        
        for(int i=0;i<temp.length;i++)
        {
            if(i<2)
            {
           if((char)Integer.parseInt(temp[i]) <0 || (char)Integer.parseInt(temp[i])>255 )
           {
               return 0;
               
           }
            }
            else
            {
            String strnew = temp[2];
        
           String newno = strnew.replace(")", "");
            
           System.out.println(newno);
            if((char)Integer.parseInt(newno) <0 || (char)Integer.parseInt(newno)>255 )
           {
               return 0;
               
           }
                
            }
        }
        
        return 1;
        
    }
    
	public static void main (String[] args) 
	{
		
			Scanner sc = new Scanner(System.in); 
       
       String input = sc.nextLine();
       
       String[] partition = input.split("\\(");
       
      // System.out.println(partition[0]);
      // System.out.println(partition[1]);
       
       String color = partition[0];
       String number = partition[1];
       
       int ans = check(color,number);
       if(ans==0)
		{
		    System.out.println("no");
		}
		else
		{
		     System.out.println("yes");
		}
		
	}
}

package uri.program.solve;

import java.util.Scanner;

public class uri1071 {
    
    
    public static void main(String[]args)
    {
      Scanner in=new Scanner(System.in);
      
      int x,y,count=0,sum=0;
      
     
  
      for(int i=0;i<2;i++)
      {
           x=in.nextInt();
           
           if(x%2==1)
           {
               
             sum=sum+x;
           }
          
      }
      
      
      
        System.out.println(""+sum);
        
    }
    
}

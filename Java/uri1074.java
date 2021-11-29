
package uri.program.solve;

import java.util.Scanner;

public class uri1074 {
    
    
    
    public static void main(String[] args)  {
 
 Scanner in=new Scanner(System.in);
      int i;
     
          int n=in.nextInt();
      for(i=0;i<n;i++)
      {  
        int x=in.nextInt();
        
          if((x%2==1)&&x>0)
          {
              System.out.println("The number is even postive");
              
          }
          else 
          {
              System.out.println("The number is even negative");
              
          }
              
          if(x==0)
          {
              System.out.println("Null");
          }
          
          if((x%2==0)&&x>0)
          {
              System.out.println("The number is Odd Positive");
              
          }
          else 
          {
              System.out.println("The number is Odd negative");
              
          }
      }
    
    
    
          }
}

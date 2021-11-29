
package uri.program.solve;

import java.util.Scanner;


public class uri1153 {
    
    public static void main(String[]args)
    {
        int fact = 1;
        
      Scanner in=new Scanner(System.in);
      
      int x=in.nextInt();
      
   for(int i=1;i<=x;i++)
   {
       
       fact=fact*i;
       
       
        
   }
   System.out.printf("%d\n",fact);
   
    
    }
}

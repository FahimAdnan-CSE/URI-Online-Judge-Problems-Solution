
package uri.program.solve;

import java.util.Scanner;


public class uri1013 {
    
    public static void main(String[]args){
        
        Scanner in=new Scanner(System.in);
         int a=in.nextInt();
        int b=in.nextInt();
        int c=in.nextInt();
        
      if(a>=b && a>=c)
      {
          System.out.printf("%d eh o maior\n",a);
          
      }
       if(b>=a && b>=c)
          {
          System.out.printf("%d eh o maior\n",b);
          
      }
      
     if (c>=a && c>=b)
          {
          System.out.printf("%d eh o maior\n",c);
          
      }
    
    }
    
    
}

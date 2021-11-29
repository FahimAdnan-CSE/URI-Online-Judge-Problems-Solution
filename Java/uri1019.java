
package uri.program.solve;

import java.util.Scanner;

public class uri1019 {
    
    
     public static void main(String[]args)
    {
          Scanner in=new Scanner(System.in);
          int y=0,m=0,d=0,daytm=0,montm=0;
          int n=in.nextInt();
          
           y=n/3600;
           montm=n%3600;
           m=montm/60;
           daytm=montm%60;
          
          
        
        System.out.printf("%d:%d:%d\n",y,m,daytm);
       
        
    }
    
    
}

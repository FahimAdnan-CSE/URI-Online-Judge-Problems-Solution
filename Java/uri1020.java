
package uri.program.solve;

import java.util.Scanner;

public class uri1020 {
    
    
     public static void main(String[]args)
    {
          Scanner in=new Scanner(System.in);
          int y=0,m=0,d=0,daytm=0,montm=0;
          int n=in.nextInt();
          
           y=n/365;
           montm=n%365;
           m=montm/30;
           daytm=montm%30;
           d=daytm%30;
          
        
        System.out.printf("%d ano(s)\n",y);
        System.out.printf("%d mes(es)\n",m);
        System.out.printf("%d dia(s)\n",d);
        
    }
    
    
}

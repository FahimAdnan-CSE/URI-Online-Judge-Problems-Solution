
package uri.program.solve;

import java.util.Scanner;


public class uri1165 {
    
    
     public static void main(String[]args)
    {
        Scanner in=new Scanner(System.in);
         
          int n,x;
        x=in.nextInt();
       
        for(int i=0;i<x;i++)
        {
          n=in.nextInt();
           int flag=0;
          for(int j=2;j<=n/2;j++)
           {
               if((n%j)==0)
               {
                   flag=1;
                   
                   break;
                  
               }
               
               
               
           }
            
            if (flag==1) 
                System.out.printf("%d nao eh primo\n",n);
            else {
                System.out.printf("%d eh primo\n",n);
            }
        }
        

    }
}

package uri.program.solve;

import java.util.Scanner;


public class uri1038 {
    
    
    public static void main(String[] args)  {
 

  Scanner in=new Scanner(System.in);
  
  int x=in.nextInt();
  int y=in.nextInt();
  double price=0;
  
       if(x==1)
  
       {
           price=y*4.00;
       }
       else if(x==2)
       {
           price=y*4.50;
       }
        else if(x==3)
       {
           price=y*5.00;
       }
        else if(x==4)
       {
           price=y*2.00;
       }
        else if(x==5)
       {
           price=y*1.50;
       }
        System.out.printf("Total: R$ %.2f\n",price);
  
    }
    
    
}

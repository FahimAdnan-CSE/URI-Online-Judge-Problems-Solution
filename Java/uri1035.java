
package uri.program.solve;

import java.util.Scanner;


public class uri1035 {
    
     public static void main(String[]args)
    {
          Scanner in=new Scanner(System.in);
    
          int a=in.nextInt();
          int b=in.nextInt();
          int c=in.nextInt();
          int d=in.nextInt();
          
          int tem1=c+d;
          int tem2=a+b;
          
          if(b>c && d>a)
          {
              if(tem1>tem2)
              {
                  if(c>0&&d>0)
                  {
                  if(a%2==0)
                  {
                      System.out.println("Valores aceitos\n");
                  }
              }
          }
          else 
              System.out.println("Valores nao aceitos\n");
          
    }
    }
}


package uri.program.solve;

import java.util.Scanner;

public class uri1010 {
    
    public static void main(String[]args){
        
        Scanner in=new Scanner(System.in);
         int code=in.nextInt();
        int un1=in.nextInt();
        double pr1=in.nextDouble();
        int code1=in.nextInt();
        int un2=in.nextInt();
        double pr2=in.nextDouble();
        
        double result=(un1*pr1)+(un2*pr2);
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n",result);
        
    }
  
}


package uri.program.solve;

import java.util.Scanner;


public class uri1036 {
    
    public static void main(String[]args)
    {
    Scanner in=new Scanner(System.in);
    
    double a=in.nextDouble();
    double b=in.nextDouble();
    double c=in.nextDouble();
         
    double temp1= (-b+ Math.sqrt((b*b)-(4*a*c)))/(2*a);
    double temp2= (-b- Math.sqrt((b*b)-(4*a*c)))/(2*a);
    
    
    if ((a == 0) || (((b*b) -(4*a*c)) < 0)) {

   System.out.print("Impossivel calcular\n");
    }
    else
    {
        System.out.printf("R1 = %.5f\n",temp1);
        System.out.printf("R2 = %.5f\n",temp2);
           
    }
    
    
    
    }
    
    
}

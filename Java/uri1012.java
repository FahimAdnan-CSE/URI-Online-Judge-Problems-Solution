
package uri.program.solve;

import java.util.Scanner;

public class uri1012 {
    
    
    public static void main(String[]args)
    {
       Scanner in=new Scanner(System.in);
         double a=in.nextDouble();
        double b=in.nextDouble();
        double c=in.nextDouble();
        
        
        double Arect_triangle=(double)0.5*a*c;
        double Arcirc=(double)3.14159*c*c;
        double Atrapezium=(double)0.5*((a+b)*c);
        double square=b*b;
        double  Arectangle=a*b;
        
     System.out.printf("TRIANGULO: %.3f\n",Arect_triangle);
        
     System.out.printf("CIRCULO: %.3f\n", Arcirc);   
                
     System.out.printf("TRAPEZIO: %.3f\n",Atrapezium);           
     System.out.printf("QUADRADO: %.3f\n",square);   
     System.out.printf("RETANGULO: %.3f\n",Arectangle);
     
    }
    
}

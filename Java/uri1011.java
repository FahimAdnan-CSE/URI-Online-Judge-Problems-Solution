
package uri.program.solve;

import java.util.Scanner;




public class uri1011 {
    
    public static void main(String[]args)
    {
        Scanner in=new Scanner(System.in);
        
        double r=in.nextDouble();
        
        double temp=(double)(4/3.0)*3.14159* Math.pow(r,3);
        
        System.out.printf("VOLUME = %.3f\n",temp);
                
        
    }
    
}


package uri.program.solve;

import java.util.Scanner;

public class uri1015 {
    
    public static void main(String[]args)
    {
    double x1,x2,y1,y2,temp;
    
    Scanner in=new Scanner (System.in);
    
    x1=in.nextDouble();
    y1=in.nextDouble();
    x2=in.nextDouble();
    
    y2=in.nextDouble();
    
    temp=Math.sqrt(Math.pow(x2-x1,2)+Math.pow(y2-y1,2));
    
        System.out.printf("%.4f\n",temp);
    
    
    
    
    
    
    
    }
    
}

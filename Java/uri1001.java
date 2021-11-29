
package uri.program.solve;

import java.util.Scanner;

public class uri1001{

   
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int A=input.nextInt();
        int B=input.nextInt();
        double C=input.nextDouble();
       
        int me=A;
       double my=B*C;
       System.out.printf("NUMBER = %d\n",me);
       System.out.printf("SALARY = U$ %.2f\n",my);
        
        
    }
    
}

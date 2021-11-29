
package uri.program.solve;

import java.util.Scanner;


public class uri1044 {
    
    
    public static void main(String[]args)
    {
       
        
      Scanner in=new Scanner(System.in);
    int A = in.nextInt();
  int B = in.nextInt();
  if (B % A == 0 || A % B == 0) {
   System.out.print("Sao Multiplos\n");
  }else {
   System.out.print("Nao sao Multiplos\n");
  }
    
    }
}

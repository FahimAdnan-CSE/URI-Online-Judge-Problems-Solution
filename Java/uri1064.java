
package uri.program.solve;

import java.util.Scanner;


public class uri1064 {
    
     public static void main(String[] args)  {
    int temp=0;
    double sum=0;
    double avg=0;
      Scanner in=new Scanner(System.in);
      
      for(int i=0;i<6;i++)
      {
          double n=in.nextDouble();
          
          if(n>0)
          {
             temp++;
          sum=sum+n;
     }  
      }
      avg=sum/temp;
        System.out.printf(temp+" valores positivos\n");
         
         System.out.printf("%.1f\n",avg);
        
        
     }
    
}

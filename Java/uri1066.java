
package uri.program.solve;

import java.util.Scanner;

public class uri1066 {
    
     public static void main(String[]args)
    {
    
        Scanner in=new Scanner(System.in);
        
        
        int count=0;
         int count1=0;
         int count2=0;
         int count3=0;
        for(int i=1;i<=5;i++)
        {
            int x=in.nextInt();
            
            if((x%2==0))
            {
                count++;
            }
            else if((x%2==1)||(x%2==-1))
               {
                count1++;
            } 
            if(x>0)
               {
                count2++;
            } 
            if(x<0)
               {
                count3++;
            } 
           
        }
         System.out.println(count+" valor(es) par(es)");
          System.out.println(count1+" valor(es) impar(es)");
           System.out.println(count2+" valor(es) positivo(s)");
            System.out.println(count3+" valor(es) negativo(s)");
           
        
        
        
    }
    
    
    
}


package uri.program.solve;

import java.util.Scanner;


public class uri1065 {
    
    
    public static void main(String[]args)
    {
    
        Scanner in=new Scanner(System.in);
        
        
        int count=0;
        
        for(int i=0;i<5;i++)
        {
            int x=in.nextInt();
            
            if((x%2==0))
            {
                count++;
            }
            
            
           
        }
         System.out.println(count+" valores pares");
        
        
        
    }
    
     
}





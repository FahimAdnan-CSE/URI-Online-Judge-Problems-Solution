#include <stdio.h>


int main ()
{

     int num;
     int rs1,rs2,rs3,rs4,rs5,rs6,rs7,rs8,rs9,rs10,rs11,rs12,rs13;
     scanf("%d",&num);
     printf("%d\n",num);

     rs1=num/100;
     rs2=num%100;
     rs3=rs2/50;
     rs4=rs2%50;
     rs5=rs4/20;
     rs6=rs4%20;
     rs7=rs6/10;
     rs8=rs6%10;
     rs9=rs8/5;
     rs10=rs8%5;
     rs11=rs10/2;
     rs12=rs10%2;
     rs13=rs12/1;



     printf("%d nota(s) de R$ 100,00\n",rs1);
     printf("%d nota(s) de R$ 50,00\n",rs3);
     printf("%d nota(s) de R$ 20,00\n",rs5);
     printf("%d nota(s) de R$ 10,00\n",rs7);
     printf("%d nota(s) de R$ 5,00\n",rs9);
     printf("%d nota(s) de R$ 2,00\n",rs11);
     printf("%d nota(s) de R$ 1,00\n",rs13);


}

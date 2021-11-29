#include <stdio.h>

int main()
{
    int i,n,num,sum1=0,sum2=0,sum3=0,temp1,temp2,temp3,rs=0;
    char ch;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
         scanf("%d %c",&num,&ch);

          if(ch=='C')

              sum1=sum1+num;


           if(ch=='R')

          sum2=sum2+num;
           if(ch=='S')
           sum3=sum3+num;

    }
    rs=sum1+sum2+sum3;
    printf("Total: %d cobaias\n",rs);
    printf("Total de coelhos: %d\n",sum1);
    printf("Total de ratos: %d\n",sum2);
    printf("Total de sapos: %d\n",sum3);
    printf("Percentual de coelhos: %.2f %%\n",(float)(sum1*100)/rs);
    printf("Percentual de ratos: %.2f %%\n",(float)(sum2*100)/rs);
    printf("Percentual de sapos: %.2f %%\n",(float)(sum3*100)/rs);







}

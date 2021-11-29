#include <stdio.h>

int main()
{

    int i,n,num,sum=0,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&num);

       for(j=1;j<num;j++)
       {

           if(num%j==0)
           {
               sum=sum+j;
           }


       }

       if(sum==num)
       {
           printf("%d eh perfeito\n",num);
       }
       else
       {
           printf("%d nao eh perfeito\n",num);
       }
       sum=0;



    }




}

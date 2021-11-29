#include <stdio.h>

int main()
{

    int i ,n,a,b;
     float num,result=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
         scanf("%d",&a);
         scanf("%d",&b);

         if(a==1001)
         {
              num=b*1.50;
         }

         else if(a==1002)
            {
              num=b*2.50;
         }
         else  if(a==1003)
            {
              num=b*3.50;
         }
         else if(a==1004)
            {
              num=b*4.50;
         }
         else if(a==1005)
            {
               num=b*5.50;
            }

         result=result+num;
         num=0;


    }
    printf("%.2f\n",result);
}

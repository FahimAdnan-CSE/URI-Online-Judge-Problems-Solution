#include <stdio.h>

int main()
{
     double num;
     double a[100];
     int i;
   scanf("%lf",&num);

   for(i=0;i<100;i++)
   {

       a[i]=num;
       num=num/2;
       printf("N[%d] = %.4lf\n",i,a[i]);

   }


}

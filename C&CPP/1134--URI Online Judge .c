#include <stdio.h>

int main()
{

    int num,i;
  int a=1,b=2,c=3,d=4,count=0,count2=0,count3=0;

    for(i=1;i<=1000;i++)

    {
        scanf("%d",&num);

    if(num==a)
    {
        count++;
    }
    else if(num==b)
    {
        count2++;

    }
    else if(num==c)
    {
        count3++;
    }


             else if(num==d)
              {

          break;
              }






    }
    printf("MUITO OBRIGADO\n");
       printf("Alcool: %d\n",count);
       printf("Gasolina: %d\n",count2);
       printf("Diesel: %d\n",count3);


  return 0;
}

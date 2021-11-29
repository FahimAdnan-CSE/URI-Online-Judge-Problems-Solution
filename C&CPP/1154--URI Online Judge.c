#include <stdio.h>

int main()
{

    float num ,i,sum=0;
float count=0;


    for(i=1;i<=1000;i++)

    {
        scanf("%f",&num);
        if (num<0)
        {
            break ;
        }

       sum=sum+num;
       count ++;



    }
    float avg=sum/count;

     printf("%.2f\n",avg);
}

#include <stdio.h>

int main()
{

    float num;
     int i,j;
     float avg;
     float sum=0;

     int count=0;
    while(count<2)
    {
        scanf("%f",&num);
        if(num>=0.00 && num<=10.00)
        {
            count++;
            sum=sum+num;

        }

        else
        {
            printf("nota invalida\n");
        }


}
  avg=sum/2.0;
  printf("media = %.2f\n",avg);
}

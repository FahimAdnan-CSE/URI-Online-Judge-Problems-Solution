#include <stdio.h>

int main()
{
     int i;
    float sum=0,j=1.00;

    for(i=1;i<=100;i++)
    {
        sum=sum+1/j;
        j++;
    }
    printf("%.2f\n",sum);


}

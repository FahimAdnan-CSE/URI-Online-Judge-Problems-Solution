#include <stdio.h>

int main()
{
    float a,b,c;
    int num,i;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        scanf("%f%f%f",&a,&b,&c);

        float result= a*2+b*3+c*5;

        float new1=result/10;

              printf("%.1f\n",new1);
    }


  return 0;
}

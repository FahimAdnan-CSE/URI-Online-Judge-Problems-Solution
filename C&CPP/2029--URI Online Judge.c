#include <stdio.h>

int main()
{

    float area,height,n,a,h,r,volume, diameter;


    while(scanf("%f%f",&volume,& diameter)!=EOF)
    {

        diameter=diameter/2;
        area=3.14*diameter*diameter;
        height=volume/(3.14*diameter*diameter);
        printf("ALTURA = %.2f\n",height);
        printf("AREA = %.2f\n",area);

    }
}

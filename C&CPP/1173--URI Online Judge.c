#include <stdio.h>

int main()
{

    int x,i,n[10];

    scanf("%d",&x);

    for(i=0;i<10;i++)
    {

        printf("N[%d] = %d\n",i,x);
        x=x*2;
    }


}

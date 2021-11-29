#include <stdio.h>

int main()
{
    int i,x,N[20],j;

    for(i=19;i>=0;i--)
    {
        scanf("%d",&N[i]);
    }

    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}

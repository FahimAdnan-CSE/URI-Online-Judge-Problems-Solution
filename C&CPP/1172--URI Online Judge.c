#include <stdio.h>


int main()
{
    int i,a[10],n ;

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
         if(a[i]<=0)
        {
            a[i]=1;
        }
       printf("X[%d] = %d\n",i,a[i]);


    }


}

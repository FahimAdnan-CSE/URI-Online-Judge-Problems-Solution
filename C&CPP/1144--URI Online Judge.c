#include <stdio.h>

int main ()
{

    int i,n;


    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);


        printf("%d ",i*i);
        int result=(i*i)+1;


        printf("%d",i*i*i);
        int result1=(i*i*i)+1;

        printf("\n");

        printf("%d ",i);
        printf("%d ",result);
        printf("%d",result1);
         printf("\n");
    }
 return 0;

}


#include <stdio.h>

int main()
{
    int a,b,c,n,i;
    a=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        a++;
        printf("%d ",a);
        a++;
        printf("%d ",a);
        printf("PUM\n");
        a=a+2;

    }




}


/*
int main()
{
    int n,i,j,m;
    int a=1;
    int b=3;


    for(i=0;i<30;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++){

                for(m=a;m<=b;m++){

        printf("%d ",m);

        }

        a=a+4;
        b=b+4;

        printf("PUM\n");

        }

    }
}
*/




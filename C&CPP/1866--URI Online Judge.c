#include <stdio.h>

int main()
{
    int i,num,n;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        scanf("%d",&n);

        if(n%2==0)
        {
            n=n/2-n/2;
            printf("%d\n",n);
        }

        else
          {


            n=n%2;
            printf("%d\n",n);
          }

    }
}

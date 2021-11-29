#include <stdio.h>

int main()
{

    int i,x,y,n,j;
    int  count=0;


    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        scanf("%d",&y);

        if(x%2==1)
        {int sum=0;
            for(j=0;j<y;j++)
            {
                sum=sum+x;
                x+=2;

            }
            printf("%d\n",sum);

        }
            else

        {   int sum1=0;
             x++;
            for(j=0;j<y;j++)
            {
                sum1=sum1+x;
                x+=2;

            }
             printf("%d\n",sum1);
        }

    }


}

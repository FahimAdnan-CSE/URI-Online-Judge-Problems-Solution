#include <stdio.h>

int main()
{
    int i,m,n,j,sum=0,sum1=0;

    for(i=0;;i++)
    {
        scanf("%d%d",&m,&n);
        if(m<=0||n<=0)
        {
            break;
        }

                if(m>n)
        {
            for(j=n;j<=m;j++)
            {
                sum=sum+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
          if(m<n)
        {
            for(j=m;j<=n;j++)
            {
                sum1=sum1+j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum1);
            sum1=0;
        }



    }


}

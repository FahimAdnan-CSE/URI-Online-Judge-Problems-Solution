#include <stdio.h>

int main()
{
    int n,i,j,sum=0,sum1=0,count=0;

    for(i=0;;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }

        else if(n%2==0)
        {
           for(i=n;i<=n+8;i=i+2)
           {
               sum=sum+i;



           }


        }
        else
        { n++;
           for(i=n;i<=n+8;i=i+2)
           {
               sum=sum+i;



           }


        }


printf("%d\n",sum);
sum=0;




    }







}

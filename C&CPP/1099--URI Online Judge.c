#include <stdio.h>

int main()
{
    int n ,x,y,i,j,k,sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        scanf("%d",&y);
if (x==y){

        sum=0;
    printf("%d\n",sum);}

        else if(x<y)
            {
        for(j=x+1;j<y;j++)
        {
            if(j%2==1)
                  sum=sum+j;


        }
printf("%d\n",sum);
sum=0;
        }
        else if(y<x)
        {


        for(k=y+1;k<x;k++)
        {
            if(k%2==1)
                  sum=sum+k;

        }

        printf("%d\n",sum);
        sum=0;
        }

    }

}

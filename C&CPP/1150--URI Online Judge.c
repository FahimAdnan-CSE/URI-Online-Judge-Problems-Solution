#include <stdio.h>

int main()
{
    int x,y,i,count=1,sum=0;

    scanf("%d%d",&x,&y);

    while(x>=y)
    {
         scanf("%d",&y);
    }


    for(i=x;i<y;i++)
    {
        sum=sum+i;


        if(sum>y)
        {
            break;
        }
           count++;
    }
    printf("%d\n",count);



}

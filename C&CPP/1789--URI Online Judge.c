#include <stdio.h>

int main()
{
    int num,too,i,n,count=0,count2=0,count3=0;


    while(scanf("%d",&num)!=EOF)
    {
        for(i=0;i<num;i++)
        {
            scanf("%d",&too);
            if(too>count)
            {
                count=too;
            }

        }
        if(count<10)
        {
            printf("1\n");
        }
       else if(count<20)
        {
            printf("2\n");
        }
       else
         {
            printf("3\n");
        }
        count=0;




    }



}

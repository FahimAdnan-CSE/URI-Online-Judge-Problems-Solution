#include <stdio.h>


    int main()
    {
        int i,n,x;
        int count=0;
        int count1=0;

        scanf("%d",&n);

        for(i=0;i<n;i++)
        {

            scanf("%d",&x);

            if(x>=10&&x<=20)
            {
                count++;
            }
            else
             count1++;

        }
        printf("%d in\n%d out\n",count,count1);


    }



#include <stdio.h>

int main()
{

    int i,n,num;

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("NULL\n");
        }

        else if(n%2==1)

        {
            printf("ODD POSITIVE\n");
        }
        else if(n%2==-1)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(n%2==0)
        {

         if(n>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else
        {
            printf("EVEN NEGATIVE\n");
        }
        }



    }

}

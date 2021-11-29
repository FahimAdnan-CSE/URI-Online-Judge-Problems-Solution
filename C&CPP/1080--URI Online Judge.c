#include <stdio.h>

int main()
{
    int i,num,count=0,a=0,e;

    for(i=1;i<=100;i++)

    {
        scanf("%d",&num);
         count++;
        if(num>a)
        {  e=count;
           a=num;
        }


    }
    printf("%d\n",a);
    printf("%d\n",e);

}

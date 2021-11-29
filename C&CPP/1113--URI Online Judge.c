#include <stdio.h>

int main()
{

    int num1,num2,i;


    for(i=1;;i++)
    {
        scanf("%d%d",&num1,&num2);

        if(num1>num2)
        {
            printf("Decrescente\n");
        }

        if(num2>num1)
        {
            printf("Crescente\n");
        }

        if(num1==num2)
        {
            break;
        }
    }
  return 0;
}

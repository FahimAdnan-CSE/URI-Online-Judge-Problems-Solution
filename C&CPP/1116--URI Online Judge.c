#include <stdio.h>

int main()
{

    int num,input1,input2,i;
    int sum=0;

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d%d",&input1,&input2);



        if (input2==0)

        {
            printf("divisao impossivel\n");
        }
        if(input2>0||input2<0)
        {
            float sum=(float) input1/input2;

            printf("%.1f\n",sum);
        }


    }



}

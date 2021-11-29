#include <stdio.h>

int main()
{

    int count;
    int i ,num;


    scanf("%d",&num);
    int and[num];

    for(i=0;i<num;i++)
    {
        scanf("%d",&and[i]);
    }

    for(i=1;i<num;i++)
    {
        if(and[0]>and[i])
        {
            and[0]=and[i];
            count=i;

        }



    }

   printf("Menor valor: %d\nPosicao: %d\n",and[0],count);


}

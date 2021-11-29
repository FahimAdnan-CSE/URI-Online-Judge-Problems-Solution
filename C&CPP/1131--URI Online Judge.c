#include  <stdio.h>

int main()
{

    int a,b,num,c=0,c1=0,c2=0;
    int count=0;

    for(;;)
    {
        scanf("%d%d%d",&a,&b,&num);
        printf("Novo grenal (1-sim 2-nao)\n");
        count++;
        if(a>b)
        {
            c++;
        }
        else if(c<b)
        {
            c1++;
        }
        else
            c2++;
        if(num==2)
            break;
    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",c);
    printf("Gremio:%d\n",c1);
    printf("Empates:%d\n",c2);
    if(c>c1)
        printf("Inter venceu mais\n");
    else if(c<c1)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");



}

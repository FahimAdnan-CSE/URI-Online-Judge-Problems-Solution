#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);


    if(b<a)
    {
        int c= 24-(a-b);
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }

    if(a<b)
    {
        int d=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
    if(a==b)
    {
        int e=24;
        printf("O JOGO DUROU %d HORA(S)\n",e);
    }


}

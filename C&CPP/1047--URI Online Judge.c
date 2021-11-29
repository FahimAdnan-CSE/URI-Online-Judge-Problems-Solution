#include <stdio.h>

int main()
{


    int t1,m1,t2,m2;

    scanf("%d%d%d%d",&t1,&t2,&m1,&m2);

    if(t1<t2)
    {
        if(m1<m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",t2-t1,m2-m1);
        }
    }
    else if(t1<t2)
    {
        if(m1>m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",t2-t1,m1-m2);
        }
    }
   else if(t2<t1)
    {
        if(m1<m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",t1-t2,m2-m1);
        }
    }
    if(t2<t1)
    {
        if(m1>m2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",t1-t2,m1-m2);
        }
    }

    else if(t1==t2)
    {
        int a=24;
        int b=0;
        if(m1==m2)
{


        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",a,b);
}
    }
}

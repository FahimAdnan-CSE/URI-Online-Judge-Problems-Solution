#include <stdio.h>

int main()
{

    int i,N,x[1000];
    int k=0;

    scanf("%d",&N);
    for(i=0;i<1000;i++)

    {
        printf("N[%d] = %d\n",i,k);

        k++;

        if(k==N)

            k=0;


    }

}


/*
int main()
{
    int N[1000], x, y,z;
    scanf ("%d", &x);
    for(y=0,z=0; y<1000; y++)
    {
        printf("N[%d] = %d\n",y,z);
        z++;
        if(z==x)
            z=0;
    }
    return 0;
}


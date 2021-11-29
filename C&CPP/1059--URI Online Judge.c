/*#include <stdio.h>

int main()
{


    int i,x,j;

    for(i=0;i<100;i++)
    { int sum=0;
        scanf("%d",&x);
       if(x==0)
        break;



        else if(x/2==0)

        for(j=0;j<x;j=j+2)
        {
            sum=sum+j;

        }


        else
        x++;
        for(j=0;j<x;j=j=+2)
        {
            sum=sum+j;

        }
        printf("%d\n",sum);
        sum=0;




    }
}

*/

#include<stdio.h>
int main()
{
    int X,i,j=0,k;
    for(k = 0;k < 100;k++){
        scanf("%d",&X);
        if(X==0)break;
        else if(X%2==0){
            for(i = X;i <= X+8;i+=2)j += i;
        }
        else { X++;
            for(i = X;i <= X+8;i+=2)j += i;
        }
        printf("%d\n",j);
        j=0;
}
    return 0;
}

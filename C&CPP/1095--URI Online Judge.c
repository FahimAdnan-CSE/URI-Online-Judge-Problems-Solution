#include <stdio.h>

int main()
{

    int i;
    int j=60;

   for(i=1;i<100;i=i+3)
    {
        printf("I=%d J=%d\n",i,j);
         if(j==0)
            break;
        j=j-5;

    }
 return 0;

}

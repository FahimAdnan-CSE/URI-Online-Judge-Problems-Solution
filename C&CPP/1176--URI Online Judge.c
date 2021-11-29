#include <stdio.h>

int main()
{

    int num,i,j,fib;
    int n;
    int temp=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&fib);

        for(j=0;j<fib;j++)
        {
            temp=temp+j;
        }
        printf("Fib(%d) = %d\n",fib,temp);
    }



}








/*#include <stdio.h>

int main()
{

    int num,i,j;
    int n;
    int temp=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

         scanf("%d",&num);
         if (num==0)
         {
             printf("Fib(%d) = %d\n",num,num);
         }
         else if(num==1)

            {
             printf("Fib(%d) = %d\n",num=1,num=0);
         }
         else
         {

         for(j=0;j<num-2;j++)
         {
             temp++;
         }
          printf("Fib(%d) = %d\n",num,temp);
         temp=1;
         //num=0;
         }

    }



}
*/

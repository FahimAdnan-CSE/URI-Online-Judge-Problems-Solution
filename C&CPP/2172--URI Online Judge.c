#include <stdio.h>

int main()
{

    long long int a,b;
    int  i;


    for(i=0;;i++)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
if(a==0&&b==0)
        {
            break;
        }

        int result=a*b;
        printf("%lld\n",a*b);



    }

 return 0;
}

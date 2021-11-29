#include <stdio.h>

int main()
{
    int i,n,a,b,c,num,result,c1=0,d=0,c2=0,c3=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      scanf("%d",&num);

      if(num%2==0) d++;
      if(num%3==0)c1++;
      if(num%4==0) c2++;
      if(num%5==0)  c3++;


    }

    printf("%d Multiplo(s) de 2\n",d++);
    printf("%d Multiplo(s) de 3\n",c1++);
    printf("%d Multiplo(s) de 4\n",c2++);
    printf("%d Multiplo(s) de 5\n",c3++);
}

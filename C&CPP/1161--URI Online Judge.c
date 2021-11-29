#include <stdio.h>

int main()
{


    long long main=0,m,n,temp=0;
    int  num,i,j;
    //char r[100];

    while(scanf("%lld%lld",&m,&n)!=EOF)
          {

              long long fact2=1,fact1=1;

                if(m==0)
                  {
                      m=1;
                  }
                  if(n==0)
                  {
                      n=1;
                  }
                for(i=1;i<=m;i++)
                {
                    fact1=fact1*i;
                }
                for(j=1;j<=n;j++)
                {
                    fact2=fact2*j;
                }
                temp=fact1+fact2;
                printf("%lld\n",temp);
                temp=0;


          }




}

#include <stdio.h>

int main()
{


    double num;

    int result,result_2,result_3,result_4,result_5,result_6,result_7,result_8,result_9,result_10,result_11,result_12,result_13,result_14,result_15,result_16;

    scanf("%lf",&num);
    printf("NOTAS:\n");

    result= num/100;
    printf("%d nota(s) de R$ 100.00\n",result);
    result_2=(int)num%100;
    result_3=result_2/50;
    printf("%d nota(s) de R$ 50.00\n",result_3);
    result_4=result_2%50;
    result_5=result_4/20;
    printf("%d nota(s) de R$ 20.00\n",result_5);
    result_6=result_4%20;
    result_7=result_6/10;
    printf("%d nota(s) de R$ 10.00\n",result_7);
    result_8=result_6%10;
    result_9=result_8/5;
    printf("%d nota(s) de R$ 5.00\n",result_9);
    result_10=result_8%5;
    result_11=result_10/2;
    printf("%d nota(s) de R$ 2.00\n",result_11);
    result_12=result_10%2;

    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1.00\n",result_12);
  int a,b,c,d,e,f,g,h,i,j,k,l,m;

  a=num*100;
  d=(int)a;
  b=d%100;
  c=b/50;
  e=b%50;
  f=e/25;
  g=e%25;
  h=g/10;
  i=g%10;
  k=i/5;
  l=i%5;

    printf ("%d nota(s) de R$ 0.50\n",c);
    printf ("%d moeda(s) de R$ 0.25\n",f);
    printf ("%d moeda(s) de R$ 0.10\n",h);
    printf ("%d moeda(s) de R$ 0.05\n",k);
    printf ("%d moeda(s) de R$ 0.01\n",l);












}



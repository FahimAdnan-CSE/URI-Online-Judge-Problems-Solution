#include <stdio.h>

int main()
{
    float num;

    scanf("%f",&num);

    if(num>=0.00&&num<=400.00)
    {
        float ami=(num/100)*15;

        printf("Novo salario: %.2f\n",num+ami);
        printf("Reajuste ganho: %.2f\n",ami);
        printf("Em percentual: 15 %%\n") ;

    }
    else if(num>=400.01&&num<=800.00)
    {
        float ami=(num/100)*12;

        printf("Novo salario: %.2f\n",num+ami);
        printf("Reajuste ganho: %.2f\n",ami);
        printf("Em percentual: 12 %%\n") ;

    }

    else if(num>=800.01&&num<=1200.00)
    {
        float ami=(num/100)*10;

        printf("Novo salario: %.2f\n",num+ami);
        printf("Reajuste ganho: %.2f\n",ami);
        printf("Em percentual: 10 %%\n") ;

    }
    else if(num>=1200.01&&num<=2000.00)
    {
        float ami=(num/100)*7;

        printf("Novo salario: %.2f\n",num+ami);
        printf("Reajuste ganho: %.2f\n",ami);
        printf("Em percentual: 7 %%\n") ;

    }
    else
    {
        float ami=(num/100)*4;

        printf("Novo salario: %.2f\n",num+ami);
        printf("Reajuste ganho: %.2f\n",ami);
        printf("Em percentual: 4 %%\n") ;

    }



}

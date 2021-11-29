#include <stdio.h>
int main()
{

    int i,j,count=0,x,k,c=0,t=0;
    float num,num1,sum=0,temp;
for(i=0;i<100;i++)
{



    for(j=0;j<100;j++)
    {
        scanf("%f",&num);


        if(num>=0&&num<=10)
        {
             sum=sum+num;
            count++;



        }
        else
            printf("nota invalida\n");
            if(count==2)
              {
    printf("media = %.2f\n",sum/2);

                  break;
              }


    }
    count=0;
    sum=0;
  for(;;)
  {

    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);



     if(x==2)
{      t=1;
        break;

}


    else if(x==1)
    {

        for(j=0;j<100;j++)
    {
        scanf("%f",&num);


        if(num>=0&&num<=10)
        {
             sum=sum+num;
            count++;



        }
        else
            printf("nota invalida\n");
            if(count==2)
              {
    printf("media = %.2f\n",sum/2);

                  break;
              }


    }
    count=0;
    sum=0;
    }



  }


if(t==1)
{
    break;
}



    }



}



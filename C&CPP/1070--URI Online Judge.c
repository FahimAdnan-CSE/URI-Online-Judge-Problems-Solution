#include <stdio.h>

int main ()
{

    int i,num=0;

    scanf("%d",&num);


    for(i=0;i<11;i++)

    {
        num++;
        if(num%2==1)
        {
            printf("%d\n",num);

    }
}
}

/*#include <stdio.h>

int main ()
{

    int i,num,count=0;

    scanf("%d",&num);


    for(i=num;;)

    {  i++;

        if(i%2==1)
        { count++;
            printf("%d\n",i);

      if(count==6)
      {
          break;
      }
    }

    /*if(count=6)
    {
        break;
    }

}
}
*/



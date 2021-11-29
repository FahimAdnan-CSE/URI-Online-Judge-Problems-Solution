#include <stdio.h>

int main()
{
    int x,y,i,result;
    scanf("%d",&x);
    scanf("%d",&y);
  if(x<y) {
    for(i=x+1;i<y;i++)
    {
        result=i%5;

        if(result==2||result==3)
            printf("%d\n",i);


    }


  }

 else
 {


    for(i=y+1;i<x;i++)
    {
        result=i%5;

        if(result==2||result==3)
            printf("%d\n",i);
 }


}
}

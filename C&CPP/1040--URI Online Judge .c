#include <stdio.h>

int main()
{


    float a,b,c,d,ne,my;

    scanf("%f%f%f%f",&a,&b,&c,&d);


     float result;
     result= ((a*2)+(b*3)+(c*4)+(d*1))/10;

     printf("Media: %.1f\n",result);

     if (result>=7.00)
        printf("Aluno aprovado.\n");
     if(result<5.00)
        printf("Aluno reprovado.\n");

     else if(result>=5.0 && result<=6.9)
     {


        printf("Aluno em exame.\n");

        scanf("%f",&ne);
        printf("Nota do exame: %.1f\n",ne);

        my=(result+ne)/2;

        if(my>=5)
            printf("Aluno aprovado.\n");

            else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",my);
     }

}

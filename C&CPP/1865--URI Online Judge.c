#include <stdio.h>

int main()
{
    int n,i,m;
    char a[100];


    scanf("%d ",&n);

    for(i=0;i<n;i++)
    {
        gets(a);


        if(a[0]=='T'&&a[1]=='h'&&a[2]=='o'&&a[3]=='r')
        {
            printf("Y\n");
        }
        else
            printf("N\n");
    }
}

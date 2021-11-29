/**------------------------------------------------*/
//Problem Setter:
//Problem No    :
//Problem Name  :
//Type          :
//Author        : Fahim Shahriar Adnan
//University    : City University
//E-mail        : fahimadnan5@gmail.com
/**--------------------------------------------**/

                                       /**  Bismillahir Rahmanir Rahim  **/
#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i;
  int a,b;

 while(scanf("%d",&a)!=EOF)
  {
      scanf(":%d",&b);
      if(a==7)
      {
          printf("Atraso maximo: %d\n",b);
      }
      else if(a==8)
      {
           printf("Atraso maximo: %d\n",b+60);
      }
      else if(a==9)
      {
           printf("Atraso maximo: 120\n");
      }
      else
      {
          printf("Atraso maximo: 0\n");


          }


  }



 return 0;
}





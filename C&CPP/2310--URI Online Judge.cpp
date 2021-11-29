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

  cin>>n;
  int a,b,c,a1,b1,c1;
  double suma=0.0,sumb=0.0,sumc=0.0,suma1=0.0,sumb1=0.0,sumc1=0.0;
  double ans1,ans2,ans3;

  while(n--)
  {
      string s;
      cin>>  s;
      cin>>a>>b>>c>>a1>>b1>>c1;
      suma=suma+a;
      sumb=sumb+b;
      sumc=sumc+c;
      suma1=suma1+a1;
      sumb1=sumb1+b1;
      sumc1=sumc1+c1;

  }
  //cout<<suma<<endl<<suma1;
 ans1=(suma1/suma)*100.00;
 ans2=(sumb1/sumb)*100.00;
 ans3=(sumc1/sumc)*100.00;
 printf("Pontos de Saque: %.2lf %%.\n",ans1);
 printf("Pontos de Bloqueio: %.2lf %%.\n",ans2);
 printf("Pontos de Ataque: %.2lf %%.\n",ans3);




 return 0;
}





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

  int count1=0;

  string line;
  double dis,r,av=0;

  while(getline(cin,line))
  {
      cin>>dis;

      av=av+dis;
      count1++;
      cin.ignore();
  }
  r=av/count1;
  //printf("%.1lf\n",r);
  cout<<fixed <<setprecision(1)<<r<<endl;



 return 0;
}
















/*#include <stdio.h>
#include <string.h>

int main (){
int cont;
char nome[100];
double valor = 0, d;

cont = 0;
while (gets(nome)){
scanf ("%lf%*c",&d);
valor = valor + d;
cont = cont + 1;
}

printf ("%.1lf\n", valor/cont);
return 0;
}
*/

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
  char t[100];



  long double x;

  scanf("%LE",&x);
  char s[100];
  sprintf(s,"%LE",x);

  if(s[0]!='-')printf("+");
  printf("%.4LE\n",x);





 return 0;
}
/*
* sprintf converts double into string.
* When you print +5, your PC shows you just 5.
* So, i make this condition when the number is positive, it prints a "+" at first.
* I use %.4LE, because it prints four digit after decimal point(.).
and you are welcome. :) */




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
  int a,b,c,a1,b1,c1,r1=0,r2=0,r3=0,t=0;
  cin>>a>>b>>c>>a1>>b1>>c1;
  if(a<a1)
  {
      r1=a1-a;
  }
  if(b<b1)
  {
      r2=b1-b;
  }
  if(c<c1)
  {
      r3=c1-c;
  }

  t=r1+r2+r3;
  cout<<t<<endl;

 return 0;
}





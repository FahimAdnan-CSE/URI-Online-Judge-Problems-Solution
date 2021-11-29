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
  int a,b,temp,hemp,remp;
  while(n--)
  {
      cin>>a>>b;
      temp=a*b;
      hemp=temp/2;
      remp=temp-hemp;
      cout<<hemp<<" cm2"<<endl;

  }



 return 0;
}





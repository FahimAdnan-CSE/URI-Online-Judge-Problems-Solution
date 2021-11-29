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
  int n,num,i,cn=0,sum=0,temp=0,tum=0;
  cin>>n;
  while(n--)
  {
      cin>>num;
      if(num%2==0)
      {
          cn++;
      }
      sum=sum+num;


  }
  temp=n-cn;
  tum=


  printf("%d %d\n",temp,sum)



 return 0;
}





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
  int n,num,i,t;
  cin>>t;

  while(t--)
  {

      if(t==0)break;


      for(i=0;i<t;i++)
      {
          cin>>n;
          if(n%2)printf("%d\n",n*2-1);
            else printf("%d\n",n*2-2);
      }


  }



 return 0;
}





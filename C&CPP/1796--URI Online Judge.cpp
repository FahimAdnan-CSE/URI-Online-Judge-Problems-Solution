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
  int n,num,i,cn1,tn1;

  cin>>n;
   cn1=0;
      tn1=0;

  while(n--)
  {

      cin>>num;
      if(num==1)
      {
          cn1++;
      }
    if(num==0)
    {
        tn1++;
    }

  }
  if(cn1>=tn1)
  {
      printf("N\n");
  }
  else
  {
      printf("Y\n");
  }



 return 0;
}





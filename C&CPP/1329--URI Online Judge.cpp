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
  int n,num,i,j;


  for(;;)
  {
      int  c1=0,c2=0;
      cin>>n;
      if(n==0)
      {
          break;
      }
      for(j=0;j<n;j++)
      {
          cin>>num;
          if(num==0)
          {
              c1++;
          }
          else
            c2++;

      }
      printf("Mary won %d times and John won %d times\n",c1,c2);


  }



 return 0;
}





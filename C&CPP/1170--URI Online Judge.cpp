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
  int n,num,i,count1;
  cin>>n;
  float x;

  for(i=0;i<n;i++)
  {
      cin>>x;
      count1=0;

      while(x>1)
      {
          x=x/2;
          count1++;
      }
      cout<<count1<<" dias"<<endl;


  }



 return 0;
}





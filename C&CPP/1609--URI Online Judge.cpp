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
  int n,num,i,j,count1=0,temp=0,l;

  cin>>n;
  while(n--)
  {
      cin>>num;
      int a[num];
      for(i=0;i<num;i++)
      {
          cin>>a[i];


      }
      for(i=0;i<num;i++)
      {
          for(j=i+1;j<num;j++)
      {

          if(a[i]==a[j])
          {
              count1++;
              temp=temp+count1;
              break;

          }
      }

          count1=0;
      }
      l=num-temp;
      printf("%d\n",l);
      temp=0;
     // count1=0;




  }



 return 0;
}





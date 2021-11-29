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

  int h1,m1,h2,m2,temp,temp2,result;

  while(1)
  {
      temp=0,temp2=0,result=0;
      cin>>h1>>m1>>h2>>m2;

        if(h1&&m1&&h2&&m2==0)
        {
            break;
        }
         else if(h1==0)
         {
             temp=24*60+m1;
            temp2=h2*60+m2;
         }
        else  if(h2==0)
         {
             temp=h1*60+m1;
            temp2=24*60+m2;
         }
         else if(h1&&h2==0)
         {
             temp=24*60+m1;
            temp2=24*60+m2;
         }
         else{

            temp=h1*60+m1;
            temp2=h2*60+m2;
         }


             result=abs(temp2-temp);
            cout<<result<<endl;



  }





 return 0;
}





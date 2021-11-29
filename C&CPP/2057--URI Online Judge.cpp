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

   int dep,tr,des,temp,d;
   cin>>dep>>tr>>des;
   temp=dep+tr+des;

   if(temp==24)
   {
       temp=0;
   }
   else if(temp>24)
   {
       temp=temp-24;
   }
   else if(temp<0)
   {
       temp=temp+24;
   }

   cout<<temp<<endl;


 return 0;
}





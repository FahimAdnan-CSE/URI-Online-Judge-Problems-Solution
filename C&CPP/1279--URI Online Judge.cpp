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

   int leap;


   while(cin>>leap)
   {
       if((leap%4==0)&&(leap%100!=0)||(leap%400==0))
       {
           cout<<"This is leap year."<<endl;
           if(leap%15==0)
           {
               cout<<"This is huluculu festival year."<<endl;
           }
           if(leap%55==0)
           {
               cout<<"This is bulukulu festival year."<<endl;
           }
       }
       else if(leap%15==0)
           {
               cout<<"This is huluculu festival year."<<endl;
               if(leap%55==0)
           {
               cout<<"This is bulukulu festival year."<<endl;
           }
           }
           else if(leap%55==0)
           {
               cout<<"This is bulukulu festival year."<<endl;
           }

       else
        cout<<"This is an ordinary year."<<endl;


   }





 return 0;
}





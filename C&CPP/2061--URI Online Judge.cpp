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
  int n,m,num,i,c1=0,c2=-1,in=0,tableft,finaltab,ans;
   string c;

   cin>>n>>m;

   for(i=0;i<=m;i++)
   {

          getline(cin,c);
          if(c=="fechou")
          {
              c1++;
              in=in+2;
          }
          else{
            c2++;
          }

   }
   tableft=n-c1;
   finaltab=tableft+in;
   ans=finaltab-c2;
   cout<<ans<<endl;



 return 0;
}





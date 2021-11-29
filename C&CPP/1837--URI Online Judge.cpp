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
  int n,num,i,q1,r1;
  int a,b;

  cin>>a>>b;

    q1=a/b;
    r1=a%b;
    if(a<0&&b<0)
    {
        q1=abs(q1)*2+1;
        r1=abs(r1)*2+1;
    }

    else if(r1<0)
    {
        r1=abs(r1)+1;
        q1=q1-1;
    }
    else if(q1<0&&r1<0)
    {
        r1=abs(r1)*2+1;
        q1=abs(q1)*2+1;
    }

    cout<<q1<<" "<<r1<<endl;



 return 0;
}





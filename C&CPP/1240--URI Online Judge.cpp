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
  cin>>n;
  long long a,b;


  for(i=0;i<n;i++)
  {
      cin>>a>>b;

      if(a>0&&b>0)
      {
          if(a%10==b%10)
          {
               cout<<"encaixa"<<endl;
          }
          else
          {
              cout<<"nao encaixa"<<endl;
          }



      }



  }



  /*
  cin>>n;


  for(i=0;i<n;i++)
  {
      string a;
      string b;
      cin>>a>>b;
      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
      if(a[0]==b[0])
      {
          cout<<"encaixa"<<endl;
      }
      else
        cout<<"nao encaixa"<<endl;


  }



 return 0;
 */
}





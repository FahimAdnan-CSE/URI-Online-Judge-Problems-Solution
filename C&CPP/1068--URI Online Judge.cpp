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
/*#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i;


  string s;

  while(cin>>s)
  {
      int cn=0,tn=0,flag=0;
      int lu=s.size();
      for(i=0;i<s.size();i++)
      {
          if(s[i]=='(')
          {
              cn++;
          }
          else if(s[i]==')')
          {
              tn++;

          }
          else if(s[0]==')'&&s[lu-1]=='(')
          {
              flag=1;
          }


      }
      if(flag==1)
      {
          cout<<"incorrect"<<endl;
      }

      else if(cn==tn)
      {
          cout<<"correct"<<endl;
      }

      else
      {
          cout<<"incorrect"<<endl;
      }

  }



 return 0;
}


*/


























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


  string s;

  while(cin>>s)
  {
      int cn=0,tn=0,flag=0;
      int lu=s.size();
      for(i=0;i<s.size();i++)
      {
          if(s[i]=='(')
          {
              cn++;
          }
          else if(s[i]==')')
          {
              tn++;
              if(cn>0)
              {
                  cn--;
                  tn--;
              }
          }


      }

      if(cn==0&&tn==0)
      {
          cout<<"correct"<<endl;
      }
      else
      {
          cout<<"incorrect"<<endl;
      }

  }



 return 0;
}





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
  int n,num,i,c1=0;
  string s;
  cin>>s;

  for(i=0;i<s.size();i++)
  {
      if(s[i]=='1')
      {
          c1++;
      }

  }
  if(c1%2==0)
      {
          s.push_back('0');
      }
      else
      {
          s.push_back('1');
      }
      cout<<s<<endl;
  //cout<<c1<<endl;
  /*if(c1%2==0)
      {
          cout<<s<<"0"<<endl;
      }
      else
        {
          cout<<s<<"1"<<endl;
      }


*/

 return 0;
}





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


  while(1)
  {

      string s;

      cin>>s;

      if(s[0]=='*')
      {
          break;
      }

      if(s[0]=='F')//&&s[1]=='l')
      {
          cout<<"Y"<<endl;
        continue;
      }
      else if(s[0]=='S')//&&s[1]=='a')
      {
          cout<<"Y"<<endl;
         continue;
      }
      else if(s[0]=='P')//&&s[1]=='e')
      {
          cout<<"Y"<<endl;
          break;
      }
      else if(s[0]=='t')//&&s[1]=='r')
      {
          cout<<"Y"<<endl;
          break;
      }
      else
    {


        cout<<"N"<<endl;
     continue;
      }
 cin.ignore();


  }



 return 0;
}





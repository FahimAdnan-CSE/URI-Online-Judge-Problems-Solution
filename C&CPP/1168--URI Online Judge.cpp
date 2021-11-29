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
  int n,num,i,j;
  string s;

  cin>> n;
  for(i=0;i<n;i++)
  {
     cin>>s;
    string l;
    int av=0;
     for(j=0;j<s.size();j++)
     {
         if(s[j]=='0')
         {
             av=av+6;
         }
         else if(s[j]=='1')
         {
             av=av+2;
             //l.push_back('2');
         }
         else if(s[j]=='2')
         {
             av=av+5;
             //l.push_back('5');
         }
         else if(s[j]=='3')
         {
             av=av+5;
             //l.push_back('5');
         }
         else if(s[j]=='4')
         {
             av=av+4;
             //l.push_back('4');
         }
         else if(s[j]=='5')
         {
             av=av+5;
             //l.push_back('5');
         }
          else if(s[j]=='6')
         {
             av=av+6;
             //l.push_back('6');
         }
        else  if(s[j]=='7')
         {
             av=av+3;
           // l.push_back('3');
         }
         else if(s[j]=='8')
         {
             av=av+7;
             //l.push_back('7');
         }
         else if(s[j]=='9')
         {
             av=av+6;
             //l.push_back('6');
         }




     }

      cout<<av<<" leds"<<endl;
  }




 return 0;
}





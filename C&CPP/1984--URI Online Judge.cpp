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
  int num,i;

  long long  n,rev=0;
  cin>> n;
  //char s[100];
  /*string s;
    string :: iterator it;
  cin>>s;

  reverse(s.begin(),s.end());

  cout<<s<<endl;
*/

 while(n>0)
  {

      rev=rev*10;
      rev=rev+n%10;
      n/=10;


  }



  cout<<rev<<endl;


 return 0;
}





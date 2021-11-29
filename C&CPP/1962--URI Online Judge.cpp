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

  long long year ,rsyear,count1=0;
  cin>>n;
  arloop{

      cin>>num;
      if(num>=2015){
      for(int j=0;j<=num-2015;j++)
      {
          count1++;

      }
      cout<<count1<<" A.C.";
      count1=0;

      }
      else{
        for(int j=0;j<2015-num;j++)
      {
          count1++;

      }
      cout<<count1<<" D.C.";
      count1=0;
      }
      cout<<endl;






  }




 return 0;
}





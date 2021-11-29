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
  int n,num,i,a,b,c;
  cin>>a>>b>>c;

  vector<int> vc(3);
   vc[0]=(b*2)+(c*4);
   vc[1]=(a*2)+(c*2);
   vc[2]=(b*2)+(a*4);

   sort(vc.begin(),vc.end());
    cout<<vc[0]<<endl;




 return 0;
}





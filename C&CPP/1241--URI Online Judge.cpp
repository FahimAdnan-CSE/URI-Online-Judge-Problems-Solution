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


  cin>> n;

  while(n--)
  {
      int flag=0;
      string  a,b;
      cin>>a>>b;
      int bsiz=b.size();
       int siz=b.size();

      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
    if(a.size()<b.size())
    {
        printf("nao encaixa\n");
    }
else{
      for(i=0;i<bsiz;i++)
      {
          if(b[i]==a[i])
          {
             flag++;
          }

      }

      if(flag==bsiz)
      {
          printf("encaixa\n");
      }
      else
      {
          printf("nao encaixa\n");
      }

}

  }



 return 0;
}





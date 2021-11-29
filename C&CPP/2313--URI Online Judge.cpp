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

  long long a,b,c;
  cin>>a>>b>>c;
  if(a+c>b)
  {


  if(a==b&&a==c&&b==c)
  {
      cout<<"Valido-Equilatero"<<endl;
      if(((a*a)+(b*b))==(c*c)||((a*a)==(b*b)+(c*c))||((a*a)+(c*c)==(b*b)))
      {
          cout<<"Retangulo: S"<<endl;
      }
      else
      {
          cout<<"Retangulo: N"<<endl;
      }
  }
  else if(b==c||a==b||a==c)
  {
      cout<<"Valido-Isoceles"<<endl;
      if(((a*a)+(b*b))==(c*c)||((a*a)==(b*b)+(c*c))||((a*a)+(c*c)==(b*b)))
      {
          cout<<"Retangulo: S"<<endl;
      }
      else
      {
          cout<<"Retangulo: N"<<endl;
      }

  }



  else if(a!=b&&b!=c&&a!=c)
  {
      cout<<"Valido-Escaleno"<<endl;
       if(((a*a)+(b*b))==(c*c)||((a*a)==(b*b)+(c*c))||((a*a)+(c*c)==(b*b)))
      {
          cout<<"Retangulo: S"<<endl;
      }
      else
      {
          cout<<"Retangulo: N"<<endl;
      }

  }

  }



  else
   {cout<<"Invalido"<<endl;
   }

 return 0;

}





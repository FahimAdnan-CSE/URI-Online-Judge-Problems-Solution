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


#include <stdio.h>
#include<math.h>
int main()
{

int i,num,count=0,j,n,root=0;
while(scanf ("%d",&num)==1){
          for(j=1;j<=num;j++){
                scanf("%d",&n);
                if(n==0 || n==1)
                printf("Not Prime\n");

                else{
                 count=1;
                root=sqrt(n);
                  for(i=2;i<=root;i++){
                              if(n%i==0){
                              count=0;
                              break;
                              }
                  }
                  if(count==1)
                  printf("Prime\n");
                  else
                  printf("Not Prime\n");
            }
          }
}
return 0;
}



/*

#include<bits/stdc++.h>
#include<cmath>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i,j;

  int p,root;
  cin>>n;

  for(i=0;i<n;i++)
  {

      cin>>p;
      if(p==0||p==1)
      {
          cout<<"Not Prime"<<endl;
      }
    else
    { int flag=0;
        root=sqrt(p);
      for(j=2;j<root;j++)
      {
         if(p%j==0)
         {
             //cout<<"Not Prime"<<endl;
            // break;
            flag=1;
         }

      }
      if(flag==1)
      {
          cout<<"Not Prime"<<endl;

      }
      else
      {

          cout<<"Prime"<<endl;
      }
    }




  }
  return 0;
  }

*/








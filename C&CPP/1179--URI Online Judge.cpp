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
#define MAX 100
using namespace std;





int main()
{
  int n,num,i=0,j,c1=0,c2=0,l=0,t=0,k;
  int a[MAX];


  for(i=0;i<15;i++)
  {

     cin>>a[i];
  }

  for(j=0;j<3;j++)
  {



          for(i=l;i<15;i++)
       {
            l++;
            if(abs(a[i])%2==0)
            {


          printf("par[%d] = %d\n",c1,a[i]);
          c1++;
          if(c1==5)

              break;
            }


        }
        i=l;
        c1=0;




        for(k=0;k<3;k++)
        {


          for(i=t;i<15;i++)
       {
           t++;
            if(abs(a[i])%2==1)
            {


          printf("impar[%d] = %d\n",c2,a[i]);
          c2++;
          if(c2==5)

              break;
            }

        }
        i=t;
        c2=0;
        }





  }



}





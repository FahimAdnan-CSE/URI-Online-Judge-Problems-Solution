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
   int first[2010] = {0};
   int i, n, m;
   scanf(" %d", &n);
   for(i = 0; i < n; i++) {
      scanf(" %d", &m);
      first[m]++;
   }
   for (i = 1; i <= 2000; i++)
   {
      if(first[i] > 0)
         printf("%d apparece %d vez (es)\n", i, first[i]);
   }
   return 0;
}


/*
int main()
{
  int n,num,i,a[2000],j=1,c=1;
  cin>>n;


  for(i=0;i<n;i++)
  {
      cin>>a[i];

  }
  sort(a,a+n);

  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              c++;
          }
      }
      printf("%d aparece %d vez(es)\n",a[i],c);

  }




 return 0;
}
*/




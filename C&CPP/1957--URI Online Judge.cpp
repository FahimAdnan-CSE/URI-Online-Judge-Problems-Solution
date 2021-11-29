
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
/*#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i=0,temp,j,r;
  string hexa;
  long long decimal;
  cin>> decimal;

  while(decimal!=0)
  {
      temp=decimal%16;

      if(decimal<10)
      {
          hexa.push_back(temp+48);

      }
      else
      {
           hexa.push_back(temp+55);
      }

        //i++;
        decimal=decimal/16;

  }

   //reverse(hexa.begin(),hexa.end());


     // cout<<hexa<<endl;
     r=hexa.length();
     for(j=r;j>=0;j--)
     {
         cout<<hexa.length()
     }


/*for(j=0;j<i;j++)
  {
      cout<<hexa[j];
  }


 return 0;
}
*/







#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i=0,j,length,  lnth;

  long long dec,temp,stor;
  char hexa[100];

  cin>> dec;

  while(dec>0)
  {
      temp=dec%16;

      if(temp<10)
      {
          hexa[i]=temp+48;
          i++;
      }
      else if(temp==10)
      {
          hexa[i]='A';
          i++;
      }
      else if(temp==11)
      {
          hexa[i]='B';
          i++;
      }

      else if(temp==12)
      {
          hexa[i]='C';
          i++;
      }

      else if(temp==13)
      {
          hexa[i]='D';
          i++;
      }

      else if(temp==14)
      {
          hexa[i]='E';
          i++;
      }
      else if (temp==15)
      {
          hexa[i]='F';
          i++;
      }

      dec=dec/16;

  }

  hexa[i]='\0';



  lnth = strlen(hexa);


for(j=lnth-1;j>=0;j--)
{
    cout<<hexa[j];
}
cout<<endl;





 return 0;
}




























   /*

#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i=0,temp,j;
  char hexa[100];
  long long decimal;
  cin>> decimal;

  while(decimal!=0)
  {
      temp=decimal%16;

      if(decimal<10)
      {
          hexa[i]=temp+48;

      }
      else
      {
           hexa[i]=temp+55;
      }

        i++;
        decimal=decimal/16;

  }

  /*for(j=i-1;j>=0;j--)
  {
      cout<<hexa[j];
  } */

/*
for(j=0;j<i;j++)
  {
      cout<<hexa[j];
  }


 return 0;
}

*/




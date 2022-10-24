#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int f=0,pos=-1,val,n;
 int linearsearch(int a[],int n,int val)
 {
     for(int i=0;i<n;i++)
     {
         if(a[i]==val)
         {
             f=1;
             pos=i;
             break;
         }
     }

     if(f==0)
     {
         cout<<endl<<val<<" number is not in the array "<<endl;
     }
     else
     {
         cout<<endl<<val<<" number is at index : "<<pos<<endl;
     }

 }

int main()
{
    freopen("toukir11.txt","R",stdin);

    srand(time(0));
    int a[1000];

    for(int i=0;i<1000;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl<<endl<<endl<<endl;
    linearsearch(a,n,14);
   getch();
}


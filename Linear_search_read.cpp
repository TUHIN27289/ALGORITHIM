#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void Linear_Search(int a[],int n,int key)
{
    int f=0, pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f=1;
            pos=i;
            break;
        }
    }
    if(f==1)
    {
        cout<<key<<" number found at : "<<pos;
    }
    else
    {
        cout<<"NUMBER  not found ";
    }
}
int main()
{
    freopen("TUHIN.txt","r",stdin);
    int a[100000];
    for(int i=0;i<100000;i++)
    {
        cin>>a[i];
    }
    Linear_Search(a,100000,476);
    getch();
}

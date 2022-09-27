#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    freopen("TUHIN.txt","w",stdout);
    srand(time(0));
    int a[100000];

    for(int i=0;i<=100000;i++)
    {
        a[i]=rand()%100000;
    }
    for(int i=0;i<=100000;i++)
    {
        cout<<a[i]<<"\t";
    }
    getch();
}

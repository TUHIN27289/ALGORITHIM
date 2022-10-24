#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    freopen("toukir11.txt","W",stdout);

    srand(time(0));
    int a[10000];
    for(int i=0;i<10000;i++)
    {
        a[i]=rand()%10000;
    }

    for(int i=0;i<10000;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl<<endl<<endl<<endl;

    getch();
}

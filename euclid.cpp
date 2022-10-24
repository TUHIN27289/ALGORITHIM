#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int euclud(int n,int m)
{
    if(n==m)
    {
        return m;
    }
    else if(n>=m)
    {
        return euclud(n-m,m);
    }
    else
    {
        return euclud(n,m-n);

    }
}
int main()
{
     cout<<euclud(24,48);
     getch();
}

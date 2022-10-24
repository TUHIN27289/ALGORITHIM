#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int factorail(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorail(n-1);
    }
}
int main()
{
    cout<<factorail(5);
    getch();
}

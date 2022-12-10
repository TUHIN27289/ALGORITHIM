#include<bits/stdc++.h>
using namespace std;
long long int fibo_iterative(int n)
{
    long long int *f=new long long int[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    cout<<fibo_iterative(90)<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int print_graph(int **p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void count_degree(int **p,int n)
{
    int *d=new int[n];
    for(int i=0;i<n;i++)
    {
        d[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i][j]==1)
            {
                d[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" degree "<<d[i]<<endl;
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    //int m[node][node];
    int **m=new int*[node];
    for(int i=0;i<node;i++)
    {
        m[i]=new int[node];
    }
     for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)

        {
            m[i][j]=0;
        }
    }
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        m[u][v]=1;
    }
    print_graph(m,node);
    count_degree(m,node);


}
/*

   6 9
   0 1
   0 5
   1 2
   1 4
   2 3
   3 0
   3 1
   4 3
   5 4
    */

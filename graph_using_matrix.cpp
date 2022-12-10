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
        m[u][v]=m[v][u]=1;
    }
    print_graph(m,node);
    count_degree(m,node);


}
/*

     7 10
    0 1
    0 2
    0 3
    1 3
    2 4
    2 5
    3 4
    3 6
    4 5
    4 6
    */

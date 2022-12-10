#include<bits/stdc++.h>
using namespace std;
vector<int>graph[7];
void print_graph(vector<int>p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<"-->";
        for(int j=0;j<p[i].size();j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void count_degree(vector<int>p[],int n)
{
    int *d=new int[n];
    for(int i=0;i<n;i++)
    {
        d[i]=0;
    }
    for(int i=0;i<n;i++)
    {
       d[i]=p[i].size();
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" degree "<<d[i]<<endl;
    }
}
void bfs(vector<int>g[],int v)
{
    queue<int>q;
    q.push(v);
    visited[v]=true;
    while(!q.empty())
    {
        q.front();
        q.pop();
        for(int i=0;i<q.size();i++)
        {

        }

    }

}
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int>m[7];
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        m[u].push_back(v);
        //m[v].push_back(u);
    }
    print_graph(m,node);
    count_degree(m,node);
}

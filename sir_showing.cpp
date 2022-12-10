#include<bits/stdc++.h>
using namespace std;
#define m 100
vector<int>g[m];
int visited[m];
int dis[m];
int node,edge;
void bfs(int v)
{
    queue<int>q;
    q.push(v);
    visited[v]=1;
    dis[v]=0;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<g[p].size();i++)
        {
            int next=g[p][i];
            if(visited[next]==0)
            {
                q.push(next);
                visited[next]=1;
                dis[next]=dis[p]+1;
            }
        }
    }
}
void add_edge(int u,int v)
{
     g[u].push_back(v);
     g[v].push_back(v);
}
print_distance()
{

}
int main()
{
    //int node,edge;
    cin>>node>>edge;
    int u,v;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        //g[u].push_back(v);
        //g[v].push_back(v);
        add_edge(u,v);
    }
    for(int i=0;i<node;i++)
    {
        cout<<i<<"---->";
        for(int j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<"\t";
        }
        cout<<endl;
    }

    int source;
    cout<<"enter source : ";
    cin>>source;

    bfs(source);
    cout<<"distance from 0 ";
    for(int i=0;i<node;i++)
    {
        cout<<i<<"\t"<<dis[i]<<endl;
    }

}
/*
7 11
0 1
0 3
1 6
1 2
1 3
1 5
5 2
3 2
2 4
6 1
6 4


7 11
0 1
0 3
1 3
2 3
4 3
1 2
4 2
4 6
1 6
2 5
1 5







*/

#include<bits/stdc++.h>
using namespace std;
#define n 100
struct node{
int val;
int cost;
};
vector<node>g[n];
int main()
{
    int nodes;
    int edge;
    cin>>nodes>>edge;
    for(int i=0;i<edge;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for(int i=0;i<nodes;i++)
    {
        cout<<i<<"\t";
        for(int j=0;j<g[i].size();j++)
        {
            cout<<"{"<<g[[i][j].val<<","<<g[i][j].cost<<"}"<<" ";
        }
        cout<<endl;
    }
}

/*
5 6
0 1 2
0 2 1
0 3 3
1 2 1
3 4 2
4 2 5
*/

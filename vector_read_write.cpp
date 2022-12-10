#include<bits/stdc++.h>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
    vector<string>vec;
    vec.push_back("toukir");
    vec.push_back("soukir");
    vec.push_back("moukir");
    vector<int>::iterator it;
    freopen("toukir.txt","r",stdin);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }

}

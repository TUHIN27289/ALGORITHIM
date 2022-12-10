
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    stack<int>vec;

    vec.push(20);
    vec.push(30);
    vector<int>::iterator it;

  while(!vec.empty())
  {
      cout<<vec.top()<<endl;
      vec.pop();
  }
}

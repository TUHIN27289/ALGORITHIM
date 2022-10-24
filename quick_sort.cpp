#include<bits/stdc++.h>
using namespace std;
void partision(int a[],int start,int end)
{
    int pivot=a[end];
    int pindex=start;
    for(int i=start,i<end;i++)
    {
        if(a[i]<pivot)
        {
            swap(a[i],a[pindex])
                pindex++;
        }
    }
            swap(a[pindex],a[end]);
            return pindex;
        }
    }
}

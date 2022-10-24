#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int print_array(int*p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<"\t";
    }
}
int *mergelist(int*a,int*b,int n,int m)
{
    int *q=new int[m+n];
    int i=0;
    int j=0;

    int k=0;
    while(i<n&&j<m)
    {
        if(a[i]>b[j])
        {
            q[k++]=b[j++];
        }
        else
        {
            q[k++]=a[i++];
        }
    }
    while(i<n)
    {
        q[k++]=a[i++];
    }
    while(j<m)
    {
        q[k++]=b[j++];

}
/*
void merge1(int p,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1],r[n2];
    for(int i=0;i<n;i++)
    {
        l[i]=a[left+1];

    for(int j=0;j<n;j++)
    {
        r[i]=a[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n&&j<m)
    {
        if(a[i]>b[j])
        {
            q[k++]=a[i++];
        }
        else
        {
            q[k++]=b[j++];
        }
    }
    while(i<n)
    {
        q[k++]=a[i++];
    }
    while(j<m)
    {
        q[k++]=b[i++];
    }

}
void merge_sort1(int a,int left,int right)
{
    if(left<right)
    {
       in mid=(left+right)/2;
       merge_sort1(a,mid+1,right);
       merge_sort1(a,left,mid,right);
    }
}*/
return q;
}
int main()
{
    int a[]={1,6,8,11};
    int b[]={2,4,5,9};
    //mergelist(a,b,4,4);
    print_array(a,4);
    cout<<endl;
    int *m=mergelist(a,b,4,4);
   print_array(m,8);
}

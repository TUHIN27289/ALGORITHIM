#include<bits/stdc++.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
            arr[k]=b[j];
            k++;j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;j++;
    }

}
void merge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[100000];
    srand(time(0));
    for(int i=0;i<=100000;i++)
    {
        arr[i]=rand()%10000000;
    }
     auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

        merge_sort(arr,0,100000);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-6;
        cout<<endl<<endl<<endl;

    cout << "Data Size "<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;







//for(int i=0;i<=100000;i++)
    //{
      //  cout<<arr[i]<<"\t";
    //}


    getch();
}

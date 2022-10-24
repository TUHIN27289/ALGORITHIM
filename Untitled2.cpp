#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

void printData(int *p, int n){
for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
}
void Bubble_sort1(int arr[],int n)
{
    cout<<endl<<endl<<"Unsorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<endl<<endl<<endl<<"Sorted Array is : ";
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int linearSearch(int *m, int n, int item){
    for(int i=0;i<n;i++){
        if(m[i]==item){
            return i;
        }
    }
    return -1;
}
int binary_search1(int arr[],int n,int val)
{
    int f=0;
    int l=n;
    while(f<=l)
    {
        int m=(f+l)/2;
        if(arr[m]==val)
        {
            return m;
        }
        else if(arr[m]>val)
        {
            l=m-1;
        }
        else
        {
            f=m+1;
        }
    }
    return -1;
}

int main(){

    int n=10000;

    int *a= new int[n];
    ifstream fin("10000.txt");

    for(int i=0;i<n;i++){
        fin>>a[i];
    }

    //printData(a,n);


    int item = 32667;

Bubble_sort1(a,n);
    /*///////////////////////////*/

    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    int index = binary_search1(a,n,item);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 = time_taken1*1e-6;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken1 << setprecision(20);
    cout << " milisec" << endl;


    if(index==-1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<item<<" Found in index="<<index<<endl;
    }


 auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/

    int index1 = linearSearch(a,n,32667);

    /*.....................Time taken by 1st Algorithm........................*/

    auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 = time_taken2*1e-6;

    cout << "Data Size "<<n<< " Time taken by program is : " << fixed
         << time_taken2 << setprecision(20);
    cout << " milisec" << endl;


    if(index1==-1){
        cout<<"Not Found"<<endl;
    }else{
        cout<<item<<" Found in index="<<index1<<endl;
    }

return 0;
}

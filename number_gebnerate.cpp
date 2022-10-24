#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void bublesort(int arr[],int n)
{
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

int main()
{
    freopen("toukir.txt","W",stdout);

    srand(time(0));
    int a[100000];
    for(int i=0;i<100000;i++)
    {
        a[i]=rand()%100000;
    }

    for(int i=0;i<100000;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl<<endl<<endl<<endl;

    getch();

}

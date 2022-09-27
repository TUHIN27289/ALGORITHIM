#include<bits/stdc++.h>
using namespace std;
int **Matrix(int r, int c)
{
    int **m = new int *[r];
    for(int i=0; i<c; i++)
    {
        m[i] = new int[c];
    }
    srand(time(0));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m[i][j] = rand()%10;
        }
    }
    return m;
}

void printMatrix(int **m, int rows, int columns)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}

void summation(int **m, int **t, int rows, int columns)
{
    int a[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            a[i][j]=m[i][j]+t[i][j];
        }
    }
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}
int main()
{
     cout<<endl<<"Matrix - 1 : "<<endl;
    int **p = Matrix(10,10);

    printMatrix(p,10,10);
    cout<<endl;
    int **q = Matrix(10,10);
    cout<<"Matrix - 2 : "<<endl;
    printMatrix(q,10,10);

    cout<<"Summation : "<<endl;

    summation(p,q,10,10);
    return 0;
}

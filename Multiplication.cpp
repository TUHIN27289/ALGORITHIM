#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int sum=0;
int **Matrix(int r,int c)
{
    int**m=new int *[r];
    for(int i=0;i<c;i++)
    {
        m[i]=new int [c];
    }
    srand(time(0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=rand()%3;
        }
    }
    return m;
}
void printMatrix(int**m,int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Multiplication(int**m,int**t,int rows,int columns)
{
    int a[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            for(int k=0;k<rows;k++)
            {
                sum+=m[i][k]*t[k][j];
            }
            a[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

}
int main()
{
    cout<<endl<<"Matrix - 1 : "<<endl;
    int**p=Matrix(3,3);
    printMatrix(p,3,3);
    int **q=Matrix(3,3);
    cout<<"Matrix -2 : "<<endl;
    printMatrix(q,3,3);
    cout<<endl<<"Multiplication : "<<endl<<endl;
    Multiplication(p,q,3,3);
    getch();
}

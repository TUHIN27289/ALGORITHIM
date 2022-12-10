#include<bits/stdc++.h>
#include<stdlib.h>
#include<vector>
using namespace std;
class student{
private:
    int id;
    string name;
    double cgpa;
    student()
    {

    }
public:
    student(int id,string name,double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
        int get_id()
        {
            return id;
        }
        string get_name()
        {
            return name;
        }

        double get_cgpa()
        {
            return cgpa;
        }




};

int main()
{
    stack<student>st;
    freopen("toukir.text.txt","r",stdin);
    int idd;
    string nname;
    double ccgpa;
    for(int i=0;i<3;i++)
    {
        cin>>idd>>nname>>ccgpa;
        student s(idd,nname,ccgpa);
        st.push(s);
    }
    while(!st.empty())
{
    student s= st.top();
    cout<<s.get_id()<<"\t"<<s.get_name()<<"\t"<<s.get_cgpa()<<"\t"<<endl;
    st.pop();
}
return 0;
}

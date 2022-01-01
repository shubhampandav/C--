
//Multilevel inheritance 

#include<iostream>
using namespace std;
class A   // this is base class 
{
    public:
    void showA()
    {
        cout<<"THis is show function of class A"<<endl;

    }
};
class B:public A // this is derived class to of A and Base to class c
{
    public:
    void showB()
    {
        cout<<"THis is function of class B"<<endl;

    }
};
class C:public B // this is dervied class of class B
{
    public:
    void showC()
    {
        cout<<"This is function of class C"<<endl;

    }
};
int main()
{
    C c1; // creating c class object here 
    c1.showA();
    c1.showB();
    c1.showC();
    return 0;


}
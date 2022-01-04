// this is type of inheritance 
#include<iostream>
using namespace std;
class A
{

    public:
    int num_A;
    void getnumberA(int n)
    {
        num_A = n;
    }
};
class B
{
    public:
    int num_B ;
    void getnumberB(int n )
    {
        num_B = n;
    }
};
class C:public A,public B
{
    public:
    void show()
    {
        cout<<"The value of Num_A "<<num_A<<endl;
        cout<<"The value of Num_B "<<num_B<<endl;

    }

};
int main()
{
    C c1;
    c1.getnumberA(10);
    c1.getnumberB(123);
    c1.show();
    return 0;
}
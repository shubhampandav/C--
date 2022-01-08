// this is type of inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void get_a()
    {
        cout << "Enter the value of A" << endl;
        cin >> a;
    }
};
class B : public A // b class inherit class A
{
public:
    int b;
    void get_b()
    {
        cout << "Enter the value of B" << endl;
        cin >> b;
    }
};
class C:public A // inherit class A
{
public:
    int c;
    void get_c()
    {
        cout << "Enter the value of C" << endl;
        cin >> c;
    }
};
class D : public B, public C
{
public:
    int d;
    void mul()
    {
        get_a();
        get_b();
        get_c();
        cout << "Multiplication of a,b,c,d : " << a * b * c * d << endl;
    }
};
int mainI()
{
    D d;
    d.mul();
    return 0;
}

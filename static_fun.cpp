#include<iostream>
using namespace std;
class demo
{
    int number ; // instance variable declare 
    static int count; // static variable declare
    public:
    void get(int n)
    {
        number = n;
        count++;
    }
    void put()
    {
        cout<<"The value of Number = "<<number<<endl;
        cout<<"The Value of Count = "<<count<<endl;
    }
};
int demo::count; // static variable decalare 
int main()
{
    demo d1,d2,d3; // created obk of class demo
    d1.get(12);
    d2.get(1234);
    d3.get(134);
    d1.put();
    d1.put();
    d1.put();
    d1.put();
    return 0;
}
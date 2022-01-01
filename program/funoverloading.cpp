#include<iostream>
using namespace std;
class Demo
{
    public: 
    int add(int x, int y); // function declaration 
    int add(float x, float y); // function declaration
};

int Demo ::add(int x, int y)
{
    int c = x+y;
    return (c);
}

int Demo ::add(float x, float y)
{
    int c = x+y;
    return (c);
}
int main()
{
    Demo d; // creating obj 
    cout<<d.add(12,23)<<endl;
    cout<<d.add(12.0,23.0)<<endl;
    return 0;
}
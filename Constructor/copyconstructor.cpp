// this is shows the demo copy constructor 
#include<iostream>
using namespace std;
class Constructor
{
    public:
    int number; // declare instace variable 
    Constructor()
    {
        number = 20;
        cout<<"The value of number in default constructor = "<<number<<endl;

    }
    Constructor(Constructor &c)
    {
        number = c.number+c.number;
        cout<<"The value of number in copy constructor = "<<number<<endl;

    }
};
int main()
{
    Constructor c; // this is obj created
    Constructor c1(c); // passing one obj into anthor obj
    return 0;
}
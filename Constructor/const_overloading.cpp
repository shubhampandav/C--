// this shows the overloading of constructor like function overloading 

#include<iostream>
using namespace std;
class Constructor
{
    public:
    int n1,n2; // instance variable declare
    Constructor() // this is default constructor
    {
        cout<<"This is default constructor is called"<<endl;
        cout<<"Enter the two values : "<<endl;
        cin>>n1>>n2;
    }
    
    Constructor(Constructor &c)
    {
        cout<<"Inside the copy Constructor"<<endl;
        int add = c.n1+c.n2;
        cout<<"The addition = "<<add<<endl;

    }
};
int main()
{
;
    Constructor c1;
    Constructor c2(c1);
    return 0;
}
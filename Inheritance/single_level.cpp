#include<iostream>
using namespace std;
class Triangle
{
    public: 
    void T_area()
    {
        int h,b,area;
        cout<<"Enter the Hight of Triangle : "<<endl;
        cin>>h;
        cout<<"Enter the Base of Triangle: "<<endl;
        cin>>b;
        area = 0.5*h*b;
        cout<<"The area of Triangle = "<<area;


    }
};
class Circle:public Triangle
{
    public: 
    void C_area()
    {
        int r,C_area;
        cout<<"Enter the radius of Circle: "<<endl;
        cin>>r;
        C_area = 3.14*r*r;
        cout<<"THe area of Circle = "<<C_area<<endl;

    }
};
int main()
{
    Circle c;  //creating objects of derived class 
    c.C_area(); //calling derived class function
    c.T_area(); // calling base class function using dervied class 

    return 0; 

}
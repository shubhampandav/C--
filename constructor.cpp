// date:- 15-12-2021
// this is demo of constructor and it's working 
// what's constructor in cpp:- constructor is special type of function cpp , the name of constructor is same
// as class name, the constructor does'nt return any value even void, 
// constructor is used to initialize obj of class

// types of constructor 
// 1. Default constructor 
// 2. parameterized constructor
// 3. copy constructor 
#include<iostream>
using namespace std;
class Constructor
{
    public: // this is access modifier is here 
    Constructor()
    {
        cout<<"This is constrctor is get created by shubham pandav "<<endl;
    } // this is constrctor in defined 
}; // class closed

int main()
{
    Constructor c; // creating obj here and when object  is get created it get automatically get call
    return 0; 
}
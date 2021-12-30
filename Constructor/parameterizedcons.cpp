// this is show the demo of parameterized constructor 
#include<iostream>
using namespace std;
class Constructor 
{
    public:
    Constructor(int a, int b) // this is parameterized constructor 
    {
        int c= a+b;
        cout<<"The addition = "<<c<<endl;
    }

};
int main()
{
    Constructor c(12,20); // when we creating para constructor we passed the value 
                        //to para const at the time of obj creating 

    return 0;
}
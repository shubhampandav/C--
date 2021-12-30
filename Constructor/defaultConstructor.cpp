
//program to show the use of constructor in cpp

#include<iostream>
using namespace std;
class Constructor
{
    public:
    Constructor()   //this is default constructor 
    {
        cout<<"I am default constructor"<<endl;

    }

};
int main()
{
    Constructor c; // when first objects is created constructor get automatically get called
    return 0;
    
}
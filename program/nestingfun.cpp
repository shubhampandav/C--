#include<iostream>
using namespace std;
class NesFun
{
    private:
    int add()
    {
        int n1,n2,add;
        cout<<"Enter a number"<<endl;
        cin>>n1>>n2;

        add = n1+n2;
        cout<<"The add is: "<<add<<endl;
        return 0;

    }
    public:
    int show()
    {
        cout<<"calling add function"<<endl;
        add(); //calling of add function 
    }
};
int main()
{
    NesFun nf; // creating obj of class 
    nf.show(); // calling show function 
    return 0;
    
}
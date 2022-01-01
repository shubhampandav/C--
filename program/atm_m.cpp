#include<iostream>
using namespace std;
class shubham
{
    public:
    int add(int a, int b)
    {
        return(a+b);

    }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    shubham s;
    int result=  s.add(a,b);
    cout<<result;
    
    return 0;
}

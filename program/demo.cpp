#include<iostream>
using namespace std;
class ArithmeticOperation
{
    public:
    void add(int a,int b)
    {
     int c=a+b;
     cout<<c<<endl;

    }
    void sub(int a,int b)
    {
     int c=a-b;
     cout<<c<<endl;

    }
    void mul(int a,int b)
    {
     int c=a*b;
     cout<<c<<endl;

    }
    void div(int a,int b)
    {
     int c=a/b;
     cout<<c<<endl;

    }


};

int main()
{
    ArithmeticOperation a1;
    int a,b;
    cout<<"please enter two number";
    cin>>a>>b;
    a1.add(a,b);
    a1.sub(a,b);
    a1.mul(a,b);
    a1.div(a,b);
    return 0;

}
  
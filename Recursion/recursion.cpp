// what is recursion : function called it's self until curtain condition meet 

#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1); // this is function called itself 

}

int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The fact of number : "<<fact(a)<<endl;
    return 0;

}
/* what is inline function in cpp :: = If make a function as inline, then the compiler 
                                      replaces the function calling location with the 
                                      definition of the inline function at compile time.*/

#include<iostream>
using namespace std;

inline int mar(int a, int b) // this is inline function 
{
    // int result = ; // this expression is ternary expression like if else 
    return ((a>b)?a:b) ;

}// closed of function 
int main()
{
    int a,b;
    cout<<"Enter two values ="<<endl;
    cin>>a>>b;
    cout<<"The Max of two number = "<<max(a,b)<<endl;
    return 0;

}
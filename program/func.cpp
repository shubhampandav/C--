#include <iostream>
using namespace std;

void add(int a, int b)
{

    int add = a + b;
    cout << add;

} // add function close

// void add(int a,int b); // function declare 
int main()
{

    int num1, num2;

    cout << "ENter two number for addition ::";
    cin >> num1 >> num2;
    add(num1,num2);
    return 0;
 }//close of main function

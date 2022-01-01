#include <iostream>
using namespace std;
class demo
{
public:
    int add(int n1, int n2); // function declaration
};

int demo ::add(int n1, int n2)
{

    int c = n1 + n2;
    cout << c;
    return 0;
    
}
int main()
{

    demo d;
    int n1, n2;
    cout << "ENter two numbers " << endl;
    cin >> n1 >> n2;

    d.add(n1, n2);
    return 0;
}
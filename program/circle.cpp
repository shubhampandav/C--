#include <iostream>
using namespace std;

class circle
{
public:
    void c(float r)
    {

        r = r * r * 3.14;
        cout << "The area is :" << r;
    }
};
int main()
{

    float r;

    cout << "Enter radius :";
    cin >> r;

    circle c1;
    c1.c(r);
    return 0;
}
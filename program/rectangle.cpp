#include <iostream>
using namespace std;

class rectangle
{
public:
    void r(int w, int l)
    {
        int area;
        area = w * l;
        cout << "The area is :" << area;
    }
};
int main()
{

    int l, w;

    cout << "Enter length,width :";
    cin >> l >> w;
    rectangle r1;
    r1.r(l, w);
    return 0;
}
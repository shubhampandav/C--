#include<iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public:
    void getdata( int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout<<"cout:";
        cout<<count<<endl;

    }
};
int item ::count; // define the static data member 
int main()
{
    item a,b,c; // count is initialized to zero
    a.getcount(); //displaying count 
    b.getcount();
    c.getcount();

    a.getdata(100); // getting data in obj a
    b.getdata(200); // getting data in into obj b
    c.getdata(300); 

    a.getcount();
    b.getcount();
    c.getcount();


    return 0; 
}
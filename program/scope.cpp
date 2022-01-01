#include<iostream>
using namespace std;
class demo
{
    public:
    int square(double r); // function declaration
    int area_circle(double r,  double pi);

};

 int demo ::area_circle(double r, double pi)
 {
     int area = pi*r*r;
     cout<<"The area of circle is :"<<area<<endl;
     return 0;
 }
 int demo ::square(double r)
 {
     int s = r*r;
     cout<<"The square  is :"<<s<<endl;
     return 0;
 }

 int main()
 {
     double r, pi = 3.14;
     cout<<"Enter the value of r";
     cin>>r;

     // creating obj 
     demo d;
     d.area_circle(pi,r);
     d.square(r);
     return 0;
     
 }
// this is type inheritance 

#include<iostream>
using namespace std;
class Shape // this is base class A 
{
    public:
    int a;
    int b;
    int get_data(int n, int m)
    {
        a = m;
        b = n;
        return 0;

    }
};
class Rectangle:public Shape // inheriting class shape 
{
    public:
    int rect_area()
    {
        int result = a*b;
        return result;

    }
};
class Triangle: public Shape //inheriting class Shape 
{
    public:
    int triangle_area()
    {
        float result = 0.5*a*b;
        return result;


    }
};
int main()
{
    Rectangle r; 
    Triangle t;
    int h,b,l,base;

    cout<<"Enter the breadth and length:"<<endl;
    cin>>b>>l;
    r.get_data(b,l);
   cout<<"The area of Rectangle = "<<r.rect_area()<<endl;

   cout<<"Enter the Height and base : "<<endl;
   cin>>h>>base;

    t.get_data(h,base);
    float m = t.triangle_area();

   cout<<"The area of Triangle ="<<m<<endl;
   return 0 ;
    


}
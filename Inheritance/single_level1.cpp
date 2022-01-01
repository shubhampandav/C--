#include<iostream>
using namespace std;
class Employee // this is base class 
{
    public: 
    float emp_salary; 
    void info(float salary)
    {
        emp_salary = salary;
        cout<<"salary of Employee = "<<emp_salary<<endl;
    }
};
class programmer: public Employee // this is derived class 
{
    public:
    float salary = 1000;
    void show()
    {
        cout<<"The salary of programmer = "<<salary<<endl;
        cout<<"THe Employee salary ="<<emp_salary<<endl;

    }
};
int main()
{
    programmer shubham;
    shubham.info(20000);
    shubham.show(); //calling show function
    return 0;
}

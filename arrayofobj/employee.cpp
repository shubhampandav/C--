#include<iostream>
using namespace std;
class Employee
{
    string emp_name,emp_dept;
    int emp_id;
    int long long emp_mobno;
    double emp_salary;
    public:
    void getInfo(string name, string dept,int id, int long long mobno, double salary)
    {
        emp_dept = dept;
        emp_name = name;
        emp_id = id;
        emp_mobno = mobno;
        emp_salary = salary;
    }
    void putInfo()
    {
        cout<<"Employee Name = "<<emp_name<<endl;
        cout<<"Employee ID = "<<emp_id<<endl;
        cout<<"Employee Department = "<<emp_dept<<endl;
        cout<<"Employee Moblie No = "<<emp_mobno<<endl;
        cout<<"Employee Salary  = "<<emp_salary<<endl;


    }


};
int main()
{
    int id;
    string name,dept;
    int long long mobno;
    double salary;
    Employee e[10]; // crating array of objects

    for (int i = 1; i <=5; i++)
    {
       cout<<"Enter the name:"<<endl;
        getline(cin,name); // taking name 
        cout<<"Enter Id : "<<endl;
        cin>>id;
        cin.ignore();  // this is for to ignore new line 
        cout<<"Enter the department of Employee: "<<endl;
        getline(cin,dept);
        cout<<"Enter Employee mobile No: "<<endl;
        cin>>mobno;
        cout<<"Enter salary of Employee:"<<endl;
        cin>>salary;
        e[i].getInfo(name,dept,id,mobno,salary);
        cin.ignore();  // this is for to ignore new line 
    }
    cout<<"The Employee information is: "<<endl;

    for (int  i = 1; i <=5; i++)
    {
        e[i].putInfo();
    }
    
    return 0;   
}
        




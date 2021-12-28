#include<iostream>
#include<limits>
using namespace std;
class Employee
{
    string emp_name;
    int emp_id;
    int long long emp_mobno;
    double emp_salary;
    public:
    void getInfo(string name, int id, int long long mobno, double salary)
    {
        emp_name = name;
        emp_id = id;
        emp_mobno = mobno;
        emp_salary = salary;
    }
    void putInfo()
    {
        cout<<"Employee Name = "<<emp_name<<endl;
        cout<<"Employee ID = "<<emp_id<<endl;
        cout<<"Employee Moblie No = "<<emp_mobno<<endl;
        cout<<"Employee Salary  = "<<emp_salary<<endl;


    }


};
int main()
{
    int id;
    string name;
    int long long mobno;
    double salary;
    Employee e[10]; // crating array of objects

    for (int i = 1; i <=2; i++)
    {
       cout<<"Enter the name"<<endl;
        getline(cin,name); // taking name 
        cout<<"Enter Id = "<<endl;
        cin>>id;

        cout<<"Enter Employee mobile No = "<<endl;
        cin>>mobno;
        

        cout<<"Enter salary of Employee ="<<endl;
        cin>>salary;
       e[i].getInfo(name,id,mobno,salary);
        cin.ignore();  // this is for to ignore new line 



    }
    cout<<"The Employee information is: "<<endl;

    for (int  i = 1; i <=2; i++)
    {
        e[i].putInfo();
    }
    
    return 0;   
}
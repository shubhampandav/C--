// cpp program for for student information using array of object
#include<iostream>
using namespace std;
class Student
{
    int stu_rollno,stu_marks;
    int long long stu_mobno; // instance variable declare 
    float percentage; // instance variable declare 
    string stu_name; // instance variable declare 

    public:
    void getInfo(int rollno , int marks, int long long mobno, string name)
    {
        stu_marks = marks;
        stu_rollno = rollno;
        stu_mobno = mobno;
        stu_name = name;
        
        
    }
    void putInfo()
    {
        cout<<"The name of student = "<<stu_name<<endl;
        cout<<"The Roll no of "<<stu_name<<" is = "<<stu_rollno<<endl;
        cout<<"The Mobile No of "<<stu_name<<" is = "<<stu_mobno<<endl;
        
        percentage = stu_marks/6;
        
        cout<<"The percentage of "<<stu_name<<" is = "<<percentage<<endl;


    }
};
int main()
{
    int rollno,marks;
    int long long  mobno;  
    string name;
    Student s[10]; 

    for (int  i = 0; i < 10; i++)
    {
        cout<<"Enter the name of student : "<<endl;
        getline(cin,name);
        cout<<"Enter Roll No: "<<endl;
        cin>>rollno;
        cin.ignore();
        cout<<"Enter  Mobile No :"<<endl;
        cin>>mobno;
        cin.ignore();
        cout<<"Enter Total Marks : "<<endl;
        cin>>marks;
        cin.ignore();
        s[i].getInfo(rollno,marks,mobno,name); // passing value to the function 


    }
    cout<<"Student Information"<<endl;
    for (int  i = 0; i < 10; i++)
    {
        s[i].putInfo(); // caling putinfo function 

    }
    return 0;
}
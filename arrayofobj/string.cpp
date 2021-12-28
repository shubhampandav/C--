#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    float perc = (marks/600);
    float t  = perc *100;

    cout<<t;
    return 0;
    
   
}
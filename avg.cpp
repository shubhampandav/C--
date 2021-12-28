// cpp for finding avg of nu number

#include <iostream>
using namespace std;

void avg(int s1, int s2, int s3, int s4, int s5, int s6); // function declaration

int main()
{

    int s1, s2, s3, s4, s5, s6;
    cout << "Enter marks of 6 subjects::";
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    avg(s1, s2, s3, s4, s5, s6); // function call
}

void avg(int s1, int s2, int s3, int s4, int s5, int s6) //function define
{

    int add = s1 + s2 + s3 + s4 + s6 + s5;
    int avg = add / 6;
    cout << "The percentage is :" << avg;
}
// cpp program for checking that is is your numeriacl password is get cracked or not
// code by :shubham pandav

#include <iostream>
using namespace std;

class password
{
public:
    int cracked_pass(int password); // function declaration
};

int password ::cracked_pass(int password) // function defined
{

    if (password <= -1)
    {
        cout << "Enter positive values only Run your code and try agin";
        exit(0);
    }
    for (int i = 0; i < 99999999; i++)
    {
        if (password == i)
        {
            cout << "your password get cracked \n Your password is :" << i << endl;
            break;
        }
        else
        {
            cout << "Trying password [" << i << "]" << endl;
        }
    }
    return 0;
}
int main()
{
    cout<<"CODE BY :- SHUBHAM PANDAV"<<endl;
    int pass;
    cout << "NOTE:- Enter only numerical data Ex. 124335,435363,7558203692,123,43 \n Enter like this password and check how strong it\n" << endl;
    cout << "Enter your password:";
    cin >> pass;

    password ps;           // creating object of password class
    ps.cracked_pass(pass); // passing value of pass to cracked pass class using ps obj

    return 0;
}
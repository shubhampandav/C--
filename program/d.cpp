#include <iostream>

using namespace std;

int main()
{
    int password;
    cout << "Enter a password to bruteforce.. : ";
    cin >> password;
    for (int i = 0; i < 999999; i++) {
        if (i == password) {
            cout << "The brute-forced password is = " << i << endl;
            break;
        }
        cout << "Loading..[" << i << "]\n";
    }



    return 0;
}
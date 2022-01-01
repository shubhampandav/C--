// cpp program for linear search

#include <iostream>
using namespace std;

//linear search using function 
int linear_search(int array[], int n, int key)
{

    for (int i = 1; i <= n; i++)
    {
        if (key == array[i])
        {
            return i;
        }
    }

    return -1;
}

// main start
int main()
{

    int n, key;
    cout << "Enter sized of array:" << endl;
    cin >> n;

    int array[n];
    cout << "Enter element of array:";
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter a key to find in array:" << endl;
    cin >> key;

    cout << linear_search(array, n, key);
    return 0;
}

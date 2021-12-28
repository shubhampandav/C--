#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();


    char arr[n];
    cin>>arr;

    cin.getline(arr,n);
    cin.ignore();

    int i = 0;
    int curlength = 0 , maxlength = 0;

    while (1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        
        if(arr[i] == '\0')
        break;
        i++;
    }
    

}
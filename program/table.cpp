// fibonacci series 
#include<iostream>
using namespace std;
int main(){

    int n,f = 0;
   
    cout<<"Enter number to find fibonacci :";
    cin>>n;

    for (int i = 1; i <=n; i++)
    { 
        f+=i;
    }
    cout<<"The ans is :"<<f;
    return 0; 
}
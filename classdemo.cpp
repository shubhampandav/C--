#include<iostream>
using namespace std;
class classdemo
{
    public:
    void s(int a){
        a*=a;
        cout<<"Square is: "<<a;
    }
};

 int main(){
     int n;
     cout<<"ENter a number: ";
     cin>>n;

     classdemo s1;
     s1.s(n);
     return 0;
 }
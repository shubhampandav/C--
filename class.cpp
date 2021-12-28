#include<iostream>
using namespace std;


 class fact{
     public:
     void factorial(int n){
         int fact =1;
         for (int i = 1; i <=n; i++)
         {
            fact = fact*i;
         }
         cout<<"fact is is:"<<fact;
         
     }
 };

 int main(){
     int num;
     cout<<"Enter a number:";
     cin>>num;

     fact f1;
     f1.factorial(num);
     return 0;

     
 }
#include<iostream>
using  namespace std;

int main(){
    int a,s,d,m,c,n1,n2;
    char o;


    do
    {
        cout<<"1.Addition\n 2.substraction \n 3.divion \n4.multiplication \n5.Exit\n";
        cin>>c;

         if(c==5)exit(0);
        cout<<"Enter two numbers:";
        cin>>n1>>n2;

        switch (c)
        {
        case 1:
        cout<<"Addition is:"<<n1+n2;
        break;
        
        case 2:
        cout<<"substraction is:"<<n1-n2;
        break;
        
        case 3:
        cout<<"divion is:"<<n1/n2;
        break;
        
        case 4:
        cout<<"multiplication is:"<<n1*n2;
        break;

        // case 5:
        // exit(0);
        // cout<<"program is exited";
        // break;
        
        default:
        cout<<"Please enter valid choice";
            break;
        }
        cout<<"Do you want to enter more ";
        cin>>o;


    } while (o=='y');
    
}
  
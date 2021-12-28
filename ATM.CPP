// cpp program for working of ATM machine 
// code By :- SHUBHAM PANDAV 

#include<iostream>
using namespace std;
int balance = 0; // global variable declaration 

class ATM  // atm class 
{
    public:
    ATM() // this is constructor 
    {
        
        cout<<" ________🏧WELCOME-TO-ATM🏧_____"<<endl;
        cout<<"|_____________MENU_____________|"<<endl;
        cout<<"|                              |"<<endl;
        cout<<"|    1.CHECK BALANCE           |"<<endl;
        cout<<"|    2.DEPOSIT AMOUNT          |"<<endl;
        cout<<"|    3.WITHDRAW AMOUNT         |"<<endl;
        cout<<"|    4.EXIT                    |"<<endl;
        cout<<"|             ᵇʸ:ˢʰᵘᵇʰᵃᵐ ᵖᵃⁿᵈᵃᵛ|"<<endl;
        cout<<"|______________________________|"<<endl;
     
     
    }
    void show_balance() //function to show balance 
    {
        cout<<"Your Account Balance is : "<<balance<<" Rs"<<endl;
    }
   
    void deposit() // function to deposit amount 
    {
        int deposit;
        cout<<"Enter Amount to Deposit:"<<endl;
        cin>>deposit;
        balance+=deposit;
        cout<<deposit<<" Rs Deposited Successfully"<<endl;
    }
    void Withdraw() // function for withdraw amount 
    {
        int withdraw;
        cout<<"Enter Amount to withdraw:"<<endl;
        cin>>withdraw;

        if(balance<=withdraw)
        {
            cout<<"Insufficient Balance ☹ "<<endl;

        }
        else{

            cout<< withdraw<<" Rs Withdraw Successfully"<<endl;
            balance-=withdraw;
        }
    }
};

int main()
{
    
    int choice;

   do //using do while loop
   {
    ATM user1;  // creating object of ATM class and constructor get automatically call

    cout<<"Enter your choice:"<<endl;
    cin>>choice;

    switch (choice)
    {
     case 1:
    user1.show_balance(); // calling balance function 
        break;

    case 2:
    user1.deposit(); // calling deposit function 
        break;
    case 3:
    user1.Withdraw(); // calling withdraw function 
        break;
   
    case 4:
    cout<<"THANK YOU 😊"<<endl;
    exit(0);// calling exit function
        break;
    
    default:
    cout<<"Enter valid choice"<<endl;
        break;
    }
   } while (choice !=4);

   return 0;
}

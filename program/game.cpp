// rock paper scissor game in cpp 

#include<iostream>
#include<time.h>
#include<random>
using namespace std;
int main(){


    int uchoice,cchoice;
    char y;
    srand((unsigned) time(NULL));
      cchoice = 1 + (rand() % 3); // this is for generating randon number 


    do
    {
        
     cout<<"-----------------------------------\n";
     cout<<"_____________WELCOME_______________\n";
     cout<<"_______________TO__________________\n";
     cout<<"________ROCK PAPER SCISSOR_________\n";
     cout<<"______________GAME_________________\n";
     cout<<"\n1 for Rock\n 2 for Paper \n 3 for Scissor \n4.exit\n";
     
     cout<<"Enter your choice:-";
     cin>>uchoice;
    if(uchoice==4){
        exit(0);
    }
     cout<<"you select :-"<<uchoice<<endl;
     cout<<"computer select :-"<<cchoice<<endl;

      if(uchoice==1 && cchoice == 2){
          cout<<"Computer wins..!";
      }
      else if(uchoice==2 && cchoice ==3){
          cout<<"Computer wins..!";
      }
      else if(uchoice==3 && cchoice==1){
          cout<<"Computer wins..!";
      }
      else if(uchoice==2 && cchoice==1){
          cout<<"User wins..!";
      }
      else if(uchoice == 3 && cchoice == 2){
          cout<<"User wins..!";
      }
      else if(uchoice == 1&& cchoice ==3){
          cout<<"User wins..!";
      }
     else{
         cout<<"Match is tie, try again";

     }
     cout<<"Do you want to play agin:-'y''n'";
     cin>>y;}

     while (y=='y');
    
 
     

     return 0;

}
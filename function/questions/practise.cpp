#include<iostream>
using namespace std;

int sum(int n){
    int add = 0;
    for(int i= 1;i<=n;i++){
        add=add+i;
    }
    cout<<"Ans is:"<<add;
    
    return 0;
}
int main(){


    int n;
    cout<<"ENter a number:";
    cin>>n;

    sum(n);
    return 0;

}
#include<iostream>
using namespace std;
int main(){


    int n;
    cout<<"ENter size of name:"<<endl;
    cin>>n;

    char arr[n]; //
    cin>>arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
       if (arr[i] != arr[n-i])
       {
          check=0;
          break;
       }
       
    }
    
    if(check == true)
{cout<<"word is match:";
}
else{cout<<"not match";
}
 
    return 0;
}
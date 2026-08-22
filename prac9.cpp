#include <iostream>
using namespace std;

int main() {
    int age;
   cout<<"tell me your age"<<endl;
    cin>>age;
    if (age == 18) {
        cout << "welcome to court";
    }
    else if((age<18)&&(age>0)) {
        cout<<"you cant enter the court";
    }
    else if(age>18) {
        cout<<"buy your seat";
    }
    else if(age<0) {
        cout<<"how are you typing this,you are not born yet";
    }
    else {
        cout<<"this ends";
    } 
    cout<<endl;

    switch (age)
    {
    case 18:
     cout<<"you are 18"<<endl;
        break;
    case 22:
    cout<<"you are 22"<<endl;
       break;
    
    default:
    cout<<"your age dont match the cases"<<endl;
        break;
    }

    cout<<"you are done with switch cases"; 




} 
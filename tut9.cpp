#include<iostream>
using namespace std;

int main() {
    //controlling system;
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cant come to party"<<endl;
    }
    else if(age==18){
        cout<<"you are welcom to party"<<endl;
    }
    else {
        cout<<"buy your ticket";
    }
    


    return 0;
    }


    

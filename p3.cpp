#include<iostream>
using namespace std;
int glo=8;
void sum() {
    int a;
    cout<<"the value of global variable glo is " <<glo<<endl;
}
int main() {
    int a=2,b=4;
    int glo=3;
    cout<<"the value of a is " <<a<< " . the value of b is " <<b<<endl;
    sum();

    return 0;
}
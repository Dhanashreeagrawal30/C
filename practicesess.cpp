#include<iostream>
#include<iomanip>
using namespace std;
int main() {
 int a=6, b=7;
 cout<<"the sum of a+b is "<<a+b<<endl;
 cout<<"the value of a-b is "<<a-b<<endl;
 cout<<"the value of a*b is "<<a*b<<endl;
 cout<<"the value of a%b is "<<a%b<<endl;
 cout<<"the value of ++a is "<<++a<<endl;
 cout<<"the value of --a is "<<--a<<endl;
 cout<<"the value of a++ is "<<a++<<endl;
 cout<<(a==b)<<endl;
 cout<<(a!=b)<<endl;
 cout<<(a>b)<<endl;
 cout<<(a<b)<<endl;

 int x=4;
 int & y=x;
  int z=((x*4*y)+9);

 cout<<x<<endl<<y;

 int u=2,v=11;
 cout<<setw(4)<<u<<endl<<setw(4)<<v;
 cout<<endl;
 cout<<z;
 
 



    return 0;

 }
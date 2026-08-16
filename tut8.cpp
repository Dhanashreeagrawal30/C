# include<iostream>;
# include<iomanip>;
using namespace std;

int main() {
  int a =8;
  cout << "the value of a was " <<a<<endl;
  a= 7;
  cout << "the value of a is " <<a<<endl;

//the constant variable;
  const int b= 5;
  cout << "the value of b is " <<b<<endl;
    
  const int c =4;
  cout << " the value of c is " <<c<<endl;

  //manupulators in c++;
  int x =7,y=88,z=555;
  cout <<"the value of x is"<<setw(3)<<x<<endl;
  cout <<"the value of y is"<<setw(3)<<y<<endl;
  cout <<"the value of z is"<<setw(3)<<z<<endl; 
 cout<<endl;
  //operative precedence in c++;
  int u=4, v=5;
 int w=((((u*5)+v)-7)+u);
 cout<<w;








    return 0; 
}
# include<iostream>;
using namespace std;
int c=45;

int main() {
    
   int a,b,c;
   cout << "enter the value of a"<<endl;
   cin>>a;
   cout<<endl;

   cout << "enter the value of b" <<endl;
    cin>>b;
    c= a+b;
    cout<< " the sum of a+b is " <<c<<endl;
    cout<< "the  value of global c is " <<::c;
    cout<<endl;

    float d= 46.7f;
    long double e = 46.7l;
    cout << "the value of d is "<<d<<endl<< "the value of e is "<<e<<endl; 

    cout<<endl;
    cout<<endl;
    //the reference variable;
    int x=7;
    int & y=x;
    cout<<x<<endl;
    cout<<y<<endl; 

    //the typecasting;
    int u= 23;
    float v= 18.7;

    cout<< "the value of u is "<<u<<endl;
    cout<< "the value of v is "<<v<<endl;
    cout <<(float)u<<endl<<(int)v<<endl; 
    cout <<u+v<<endl;
    cout<<u+int(v)<<endl;
    cout<<float(u)+v<<endl; 


    

    







return 0;


}
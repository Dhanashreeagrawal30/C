//learning operaters in c++;
#include <iostream> ;
using namespace std;
int main() {
    cout << "different types of operaters in c++ are :\n";
    //Arthemetic operators;
    int a=3, b=4;
    cout << "the value  of a+b is " << a+b << endl;
    cout <<"the value of a-b is" << a-b<<endl;
    cout <<"the value of a*b is" << a*b<<endl;
    cout << "the value of a/b is" << a/b<<endl;
    cout <<" the value of a%b is" << a%b<<endl;
    cout <<"the value of a++ is" << a++<<endl;
    cout <<"the value of a-- is" << a--<<endl;
    cout <<"teh valueof ++a is " << ++a<<endl;
    cout <<"the value of --a is" << --a<<endl;
    cout<<endl;



    //the comparison operators;
    int c=5 ,d=7;
    cout << "the value of c==d is" << (c==d)<<endl;
    cout << "the value of c!=d is" << (c!=d) <<endl;
    cout << "the value of c>d is " << (c>d) << endl;
    cout << "the value of c<d is" << (c<d) << endl;
    cout << " teh value of c>=d is" << (c>=d) <<endl;
    cout << "the value of a<=b is" << (a<=b) << endl;
    cout<<endl;

    //logical operators;
    cout << "the value of and is" << ( (c==d) && (c>d))<< endl;
    cout << "the value of or is" << ( (c!=d) || (c>d) )<<endl;
    



    return 0;
}
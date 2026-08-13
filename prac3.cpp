# include<iostream>
using namespace std;

int glo = 1;
void sum() {
    int a;
    int glo = 2;
    cout <<glo;
}
int main() {
    int glo = 4 , b =9 ,c =8;
    char d = 'a';
    bool e=true;
    sum();
    cout << " the value of glo is " << glo << "\n"
            << " the value of b is " << b << "\n"
            << " the value of c is " << c << "\n"
            << " the value of d is " << d << "\n"
            << " the value of e is " << e;


}
#include<iostream>
using namespace std;
#include "fraction.cpp"
int main(){

    fraction f1(10,2);
    fraction f2 = ++f1;

    f1.print();
    f2.print();
    /*
    fraction f2(15,4);
    fraction f3 = f1.add(f2);
    fraction f4 = f1 + f2;
    fraction f5 = f1 * f2;
    fraction f6 = f1.multiply(f2);

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    f6.print();

    if (f1 == f2){
        cout << "equal" << endl;
    }else{
        cout << "not equal" << endl;
    }
    */
    return 0;
}
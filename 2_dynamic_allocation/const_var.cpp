#include<iostream>
using namespace std;
int main(){

    //constant int
    const int i = 10;
    int const i2 = 10;
    //you have to initialize and then you cant change it anywhere below in the code
    
    // constant reference from a non const int
    int j = 12;
    const int & k = j;
    j++;
    // but not k++ as it is only read only path
    cout << k << endl;

    //constant reference from a const int 
    int const j2 = 12;
    int const &k2 = j2;
    // both j2++ and k2++ not possible 

    //reference from a const int

    int const j3 = 123;
     // int & k3 = j3; not allowed to do that
}
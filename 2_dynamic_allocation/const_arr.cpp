#include<iostream>
using namespace std;
int main(){
    int const  i = 10;
    // int *p = & i; we cannot do this
    // you cant store the address of the constant integer 

    int const * p = &i; //read it in reverse direction pointer to a constant integer
    
}
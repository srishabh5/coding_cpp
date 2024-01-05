#include<iostream>
using namespace std;
#include "dynamic_array.cpp"
int main(){
    DynamicArray d1;

    d1.addElement(10);
    d1.addElement(120);
    d1.addElement(20);
    d1.addElement(30);
    d1.addElement(40);
    d1.addElement(30);
    d1.addElement(20);

    d1.print();

    DynamicArray d2(d1);//copy constructor which will do a shallow copy
    
    DynamicArray d3;
    d3 = d1; //this copy assignment operator which will also do a shallow copy
    d1.addElement(0,3);
    
    d2.print();
    
    d3.print();

}
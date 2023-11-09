#include<iostream>
using namespace std;
#include "student.cpp"
int main(){
    char name[] = "abcd";

    student s1(24,name);
    //we made the deep copy
    student s2(s1);//using the default copy constructor
    //now we make changes in the name of s2
    s1.display();
    s2.name[0] = 'x';
    s2.display();
    s1.display();
    //this tells us that whenever we use the copy constructor it make a shallow copy
    // so now we change in the default copy constructor
    return 0;
}
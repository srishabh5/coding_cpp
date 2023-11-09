#include<iostream>
using namespace std;
#include "student.cpp"
int main(){
    char name[] = "abcd";
    student s1(24,name);
    s1.display();

    //now if i change name
    name[3] = 'e';
    student s2(24,name);
    s2.display();
    //now if i check for student 1 details
    s1.display();
    return 0;
}
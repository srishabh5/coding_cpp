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
    // the changes are reflected here as well which should not be the case
    return 0;
}
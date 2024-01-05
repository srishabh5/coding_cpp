#include <iostream>
#include "student.cpp"

int main(){
    student s1, s2, s3; //we made several objects of the class student statically

    student* s4 = new student; //dynamically

    //student has rollNumber and age
    //we have rollNumber as the private property and age as the public property

    s4 -> setrollNumber(21,123);
    s1.setrollNumber(22,123);

    std::cout << "s4:rollNumber" << s4 -> getrollNumber() << std::endl;
    std::cout << "s1:rollNumber" << s1.getrollNumber() << std::endl;

    return 0;
}
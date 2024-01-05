#include <iostream>
class Animal{
    public:
    void sound(){
        std::cout<<"Soud: "<<std::endl;
    }
};

class dog : public Animal {
    public:
    void bark(){
        std::cout<<"Au Au"<<std::endl;
    }
};

int main(){
    Animal ani;
    dog doggy;

    ani.sound();
    doggy.bark();
}
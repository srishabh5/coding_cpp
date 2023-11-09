#include<iostream>
using namespace std;
void g(const int * p){
    //(*p)++; // we wont be able to do it as it is pointer to a constant integer

}

void f(int const & a ){
    //a++; //we cant do this
    }

int main(){
    int i = 10;
    int j = 12;
    int const *p = &i  ;
    p = &j;//we can do that as p is a pointer to a constant integer
    // (*p)++ obviously,we cannot do this

    int * p1 = &j;
    g(p1); // we gave the read and write permission but if you see in the fn we take the variable as read only

    int * const p2 = &i;
    (*p2)++;//we can do this as constant pointer to an integer

    int const * const p3 = &i;// constant pointer to a constant integer
    //p3 = &j;
    //(*p3)++;
}
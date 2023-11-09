#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4};
    int *p = a+1;
    //this wont work cannot increment a value of type int[4]
    //*p = a++;
    cout << *p << endl;
}
/*
Write a program to find x to the power n (i.e. x^n). 
Take x and n from the user. You need to return the answer.
*/
int power(int x,int n){
    //base case
    if (n == 0){
        return 1;
    }
    //ih
    int small_output = power(x, n - 1);
    return x * small_output;
}

#include <iostream>
using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    cout << power(x,n) << endl;
    return 0;
}
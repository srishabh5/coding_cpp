//Given two integers M & N, calculate and return their multiplication using recursion.
// You can only use subtraction and addition for your calculation.
// No other operators are allowed.
#include<iostream>
using namespace std;
int multiplication(int m, int n){
    //base case
    if(n == 0){
        return 0;
    }
    //recursive call
    int small_output = multiplication(m,n-1);
    //small_calculation
    return m + small_output;
}
int main(){
    cout << multiplication(5,6)<< endl;
    return 0;
}
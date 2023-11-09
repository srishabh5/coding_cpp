#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if (n == 0){
        return 1;
    }
    //induction hypothesis
    int small_output = factorial(n-1);
    //induction step
    return n * small_output;
}

int main(){
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}
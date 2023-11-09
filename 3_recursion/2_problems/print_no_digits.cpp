//Given the number 'n', find out and return the number of digits present in a number .
#include<iostream>
using namespace std;

int noofdigits(int n){
    //base case
    if (n / 10 == 0){
        return 1;
    }
    // hypothesis
    int small_output = noofdigits(n/10);
    //induction step
    return 1 + small_output;
}

int main(){
    int n;
    cout << "enter the number n" << endl;
    cin >> n;
    cout << noofdigits(n) << endl;
    return 0;
}
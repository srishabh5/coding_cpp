//Given the number 'n', 
//write a code to print numbers from 1 to n in increasing order recursively.
#include<iostream>
using namespace std;
void print(int n){
    //base case
    if (n == 1){
        cout << 1 << " ";
        return;
    }
    //hypothesis
    print(n-1);
    //induction step
    cout << n << " ";
    return;
}
int main(){
    int n;
    cout << "enter the number n." << endl;
    cin >> n;
    print(n);
    return 0;

}
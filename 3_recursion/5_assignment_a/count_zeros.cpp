//Given an integer N, count
// and return the number of zeros that are present in the given integer using recursion.
#include<iostream>
using namespace std;
int count_zeros(int n){
    //base
    if(n == 0){
        cout<<"first step"<<endl;
        return 1;
    }
    //recursive call
    int small_out = 0;
    if(n/10 != 0){
        cout << "second step" << endl;
        small_out = count_zeros(n/10);
    }
    //small calc
    /*
    if(n % 10 == 0){
        cout<<"second step"<<endl;
        return small_out + 1;
    }
    else{
        cout<<"third step"<<endl;
        return small_out;
    }
    */
    cout << "third step" << endl;
    return (n % 10 == 0) ? small_out + 1: small_out;
    //return small_out; 
}
int main(){
    cout<< count_zeros(100201)<<endl;
    return 0;
}
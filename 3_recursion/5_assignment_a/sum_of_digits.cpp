#include<iostream>
//using namespace std;
int sumofdigits(int n){
    //base case
    if(n == 0){
        return 0;
    }
    //recursive call
    int small_out = sumofdigits(n/10);
    //small calculation
    return small_out + (n % 10);
}
int main(){
    std::cout << sumofdigits(1230) << std::endl;
}
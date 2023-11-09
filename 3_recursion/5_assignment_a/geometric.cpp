//Given k, find the geometric sum i.e.
//1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
#include<iostream>
#include <iomanip>//library for the precision
//using namespace std;
double geometric(int k,double r){
    //base case
    if(k == 0){
        return 1 ;
    }
    //recursive call
    double small_ans = geometric(k-1, r);
    //small_calculation
    return small_ans * r + 1; 
}
int main(){
    std::cout << std::fixed;
    std::cout << std::setprecision( 5 );
    double r = 1/double(2);
    std::cout << r << std::endl;
    std::cout << geometric(10, r);
    std::cout<<std::endl;
    return 0;
}
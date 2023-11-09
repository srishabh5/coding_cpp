//A child is running up a staircase with N steps, 
//and can hop either 1 step, 2 steps or 3 steps at a time.
// Implement a method to count how many possible ways the child can run up to the stairs.
// You need to return number of possible ways W.
#include<iostream>
using namespace std;

int staircase(int n){
    //base case
    /*if(n <= 0){
        return 0;
    }
    //calling for all the three possibilities
    //for step 1
    int small_out_1 = staircase(n-1) + 1;
    int small_out_2 = 0;
    if( n >= 2){
    small_out_2 = staircase(n-2) + 1;}
    int small_out_3 = 0;
    if (n >= 3){
    small_out_3 = staircase(n-3) + 1;}
    return (small_out_1 + small_out_2 + small_out_3)/2;
    */
   if(n < 0){return 0;}//then there is no way this is working
   if(n == 0){
    //it ends up at the top of the stair then
    //we say we have one way
    return 1;
   }
   return staircase(n-1)+staircase(n-2)+staircase(n-3);
   //this basically saying it will call the smaller functions
   //if it works return 1 at root node saying yes this path exists
} 

int main(){
    std::cout<< staircase(4) << std::endl;//answer 7
    std::cout<< staircase(5) << std::endl;//answer 13

    return 0;
}
//Given an array of length N and an integer x, 
//you need to find if x is present in the array or not. Return true or false.
#include<iostream>
using namespace std;
bool check_num(int * arr, int size, int x){
    //base
    if (size == 0){
        return false;
    }
    //hypothesis
    //induction step
    // i think it is wise to first just check the number is in the beginning
    // before checking the whole array.
    if(*arr == x){
        return true;
    }
    /*else{ 
    if(check_num(arr+1,size-1,x)){
        return true;
    }
    else return false;
    }*/
    return check_num(arr + 1, size - 1, x);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    cout << check_num(arr, 6 , 3)<< endl;
    return 0;

}

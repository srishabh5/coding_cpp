//Given an array of length N, you need to find and return the sum of all elements of the array.
#include<iostream>
int sumofarr(int* arr, int size){
    //base case
    if(size == 0){
        return 0;
    }
    int small_output = sumofarr(arr+1,size -1);
    return *arr + small_output;
}
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout << sumofarr(arr,5) << endl;
    return 0;
}
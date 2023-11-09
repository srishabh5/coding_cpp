//Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
//Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
//You should start traversing your array from 0, not from (N - 1).
//Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std;
int last_index(int * arr, int size, int x){
    //base
    if(size == 0){
        return -1;
    }
// this time the small calculation 
//after the recursive call because we want to travel from right to left

    int small_ans = last_index(arr+1,size-1,x);
    if(small_ans == -1){
            if(*arr == x){
                return 0;
            }
            else return -1;
    }
    else {
        return 1 + small_ans; 
    }
}
int main(){
    int arr[]={1,2,3,4,5,5,4,3};
    cout << last_index(arr,8,4) << endl;
    return 0;

}
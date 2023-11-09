//find the index of the given number first appearance in the array 
//where we are travelling from left to right

//Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
//First index means, the index of first occurrence of x in the input array.
//Do this recursively. Indexing in the array starts from 0.
#include<iostream>
using namespace std;
int first_index(int*arr, int size , int x){
    //base
    if(size == 0){
        return -1;
    }
    //hypothesis
    //induction step

    //small calculation first

    if(*arr == x){
        return 0;
    }

    //recursive call
    int small_ans = first_index(arr+1,size-1,x);
    if(small_ans == -1){
        return -1;
    }
    else {return small_ans + 1;}
}
int main(){
    int arr[]={1,2,3,4,5};
    cout << first_index(arr,5,7) << endl;
    return 0;
}
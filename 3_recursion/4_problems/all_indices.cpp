//Given an array of length N and an integer x,
// you need to find all the indexes where x is present in the input array.
// Save all the indexes in the output array (in increasing order).
//Do this recursively. Indexing in the array starts from 0.
//return the number of times it was observed 
// -1 for not founding it at all.

#include<iostream>
using namespace std;
int all_indices(int *arr, int size, int x, int *out){
    //base
    if(size == 0){
        return 0;
    }  
    //to go from left to right
    //small calculation step first
    //will think how to do above steps 
   
    /*
    int small_ans = 0;
    if(arr[0] == x){
        *out = 0;
        small_ans = 1;
    }
    //if i now take the recursive call

    all_indices(arr+1, size-1, x, out);
    */

    // lets do the easy way explained in the video
    //recursive call
    int small_ans = all_indices(arr,size-1,x,out);
    //small calculation step
    if (arr[size-1] == x){
        out[small_ans] = size-1;
        return small_ans+1; 
        }
    else{
        return small_ans;
    }
}
int main(){
    int arr[6]= {5,6,5,4,6,6};
    int out[]={};
    int ans = all_indices(arr,6,5,out);
    cout << ans << endl;
    for (int i = 0; i < ans; i++){
        cout << out[i] << " ";
    }
    cout <<" "<< endl;
    return 0;
}
#include<iostream>
using namespace std;

int find(int *arr, int *out, int x, int size){
    //base step
    if(size == 0){
        return 0;
    }    
    // hypothesis
    int ans = find(arr + 1, out, x, size - 1);
    for (int i = 0; i < ans; i++){
        out[i] += 1;
    }
    //small calc
    if (*arr == x){
        for (int i = ans; i > 0; i--){
            out[i] = out[i-1]; 
        }
        *out = 0;
        return ans + 1;
    }
    else return ans;
}

int main(){
    int size = 6;
    int arr[6] = {2,4,2,5,2,1};
    //int * out = new int [size];
    int out[6] = {};
    int x = 2;
    int result = find(arr, out, x, size);
    for(int i = 0; i < result; i++){
        cout << out[i] << " ";
    }
    cout << endl;
    //delete []out;
    return 0;
}
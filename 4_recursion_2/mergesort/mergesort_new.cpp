#include<iostream>
//using namespace std;
void mergesort(int input[], int si, int ei){
    //base case
    if(si >= ei){
        return;
    }
    //hypothesis
    //split the array into two halfs
    int mid = (si+ei)/2;
    mergesort(input,si,mid);
    mergesort(input,mid+1,ei);
    //now we assume we have received the two sorted small arrays
    //lets combine them now
    int temp[ei-si];
    int j = mid + 1;
    int i = si;

    for(int k = si; k <= ei;k++){
        if(input[i] <= input[j]){
            temp[k-si] = input[i];
            i++;
            std::cout << " i " << i << " j " << j << " k " << k << std::endl;
        }
        else{
            temp[k-si] = input[j];
            j++;
        }
    }
    for(int l = si; l <= ei; l++){
        input[l] = temp[l];
    }
    return;
}
int main(){
    int input[10] = {1,2,5,4,2,3,8,9,4,3};
    mergesort(input,0,9);
    int size = 10;
    for(int i = 0; i < size; i++){
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include<iostream>
using namespace std;
void merge(int input[], int si, int ei){
    //we have two indexes at both of the arrays i and j
    //std::cout << si << " "<< ei << std::endl;
    int mid = (si + ei)/2;
    int len = ei-si+1;
    int temp[len];
    int i = si, j = mid + 1;
    for (int k = 0; k < len ; k++){
        if (i < mid +1 && j < ei + 1){
            if(input[i] < input[j]){
                temp[k] = input[i];
                i++;
            }else{
                temp[k] = input[j];
                j++;
            }
        }else{
            if(i == mid+1){
                temp[k] = input[j];
                j++;
            }else{
                temp[k] = input[i];
                i++;
            }
        }
    }
    //now copying the sorted array back to original array
    for (int k = 0; k < len; k++){
        input[k + si] = temp[k];
        //std::cout << " i am here"<<input[k+si] << " " << temp[k]<<std::endl;
    }
    return;
}
void mergesort(int input[], int si, int ei){
    //base case
    //either one element or no element left
    if(si >= ei){
        return;
    }
    //recursive call on the two smaller arrays
    int mid = (si + ei)/2;
    
    mergesort(input,si,mid);
    mergesort(input,mid+1,ei);
    //hopefully we have the two sorted arrays now the task in hand is to merge them 
    // so we call the fn merge
    merge(input,si,ei);
    return;
}
int main(){
    int input[100];
    int size;
    //cin.getline(input,100);
    std::cin >> size;
    for (int i = 0; i < size; i++){
        std::cin >> input[i];
    }
    
    //int temp_input[] = {1,2,3,4,5};
    //int size = 5;
    mergesort(input, 0, size - 1);
    for (int i = 0; i < size; i++){
        std::cout << input[i] << " ";
    }
    std::cout<< std::endl; 
}
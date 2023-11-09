#include<iostream>
using namespace std;
int partition(int input[],int x, int si, int ei){
    int count = 0;
    for (int i = si+1; i <= ei; i++){
        if(input[i] < x){
            count = count + 1; 
        }
    }
    std::cout << count << std::endl;
    //we swap and put the x at its correct position
    int temp = input[count+si];
    input[count+si] = x;
    input[si] = temp;
    //now we need to start iterating from i++ for "si" and j-- which works for "ei"
    int i = si,j = ei;
    while(i != count+si && j != count+si){
        if (input[i] >= x){
            if(input[j] < x){
                temp = input[j];
                input[j] = input[i];
                input[i] = temp;
                i++;
                j--;
            }else{
                j--;
            }
        }else{
            i++;
        }
    }
    return count + si;
}
void quicksort(int input[],int si, int ei){
    //base case
    if(si >= ei){
        return;
    }
    //calculation
    int c = partition(input,input[si],si,ei);
    for (int i = si; i <= ei; i++){
        std::cout << input[i] << " ";
    }
    std::cout<<"after partition"<<std::endl;
    //recursive call
    quicksort(input,si,c-1);
    quicksort(input, c+1,ei);
    for (int i = si; i <= ei; i++){
        std::cout << input[i] << " ";
    }
    std::cout<<"quick sort completion"<<si<<"  "<<ei<<std::endl;
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
    quicksort(input, 0, size - 1);
    for (int i = 0; i < size; i++){
        std::cout << input[i] << " ";
    }
    std::cout<< std::endl; 
}
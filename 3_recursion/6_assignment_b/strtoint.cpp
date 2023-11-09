//Write a recursive function to convert a given string into 
//the number it represents. That is input will be a numeric string
// that contains only numbers,
// you need to convert the string into corresponding integer and return the answer.
#include<iostream>
//using namespace std;
int length_str (char input[]){
    int i = 0; 
    for(;input[i]!='\0';i++){
    }
    return i;
}
int strtoint(char input[], int size){
    /*
    //base case
    int len_str = length_str(input);
    if(len_str == 0){
        return 0;
    }
    
    //recursive call
    int small_out = strtoint(input+1);
    //small_calculation
    int temp = input[0]-'0';
    for(int j = 0;j<len_str-1;j++){
        temp = temp * 10;
    }

    return small_out + temp;
    */

   //new way
   //base case
    if(size == 0){
        return 0;
    }
   //recursive call
   int small_out = strtoint(input, size - 1);
   //small cal

   return small_out * 10  + (input[size - 1] - '0');



}
int main(){
    char input[1000];
    std::cin.getline(input,1000);
    int size = length_str(input); 
    std::cout << strtoint(input, size)<<std::endl;
    return 0;
}
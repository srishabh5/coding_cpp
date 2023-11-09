#include<iostream>
//using namespace std;
void remove_duplicates(char input[]){
    //base case
    if(input[0]=='\0'){
        return;
    }
    //small_calculation
    /*
    if(input[0] == input[1]){
        int i = 1;
        for(;input[i]!='\0';i++){
            input[i-1] = input[i];
        }
        input[i-1] = input[i];
        remove_duplicates(input);
    }else{
        remove_duplicates(input+1);
    }
    */

   //small calculation
    
    if(input[0] == input[1]){
        for(int i = 0;input[i]!= '\0'; i++){
            input[i] = input[i+1];
        }
        remove_duplicates(input);
    }
    else{
        remove_duplicates(input+1);
    }
}
int main(){
    char input[100];
    std::cin >> input;
    remove_duplicates(input);
    std::cout << input << std::endl;
    return 0;
}
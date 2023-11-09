#include<iostream>
//using namespace std;
int print_keypad(int input,std::string* keypad,std::string* output){
    //base case
    if(input == 0 || input == 1){
        output[0] = "";
        return 1;
    }
    //recursive call if i enter 234 then call for recursive call 234/10
    // and small cal on 234%10 = 4
    std::string temp_output[1000];//we will store the small_output into this which will be easier to use in future
    int small_output = print_keypad(input/10, keypad, temp_output);
    //small_calculation
    int current_input = input%10;
    int size_input_keypad = keypad[current_input].size();
    //we need to create a copy of the small_output which we already did above using temp_out
    for(int i = 0; i < size_input_keypad; i++){
        for(int j = 0; j < small_output; j++){
            output[j+small_output * i] =  temp_output[j] + keypad[current_input][i];
        }
    }
    return small_output * size_input_keypad;

}
int main(){
    std::string output[1000];
    std::string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};
    int input;
    std::cin >> input;
    int count = print_keypad(input, keypad, output);
    for (int i = 0; i < count; i++){
        std::cout << output[i]<<std::endl;
    }
    return 0;
}
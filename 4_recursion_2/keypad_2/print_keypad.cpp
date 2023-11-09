#include<iostream>
//using namespace std;
void print_keypad(int input, std::string output, std::string keypad[]){
    //base case
    if(input == 0){
        std::cout << output << std::endl;
        return;
    }
    //recursive call
    //incase of 234 we have 4
    int current_input = input%10;
    //the number of elements in the keypad number will determine the no of recursive calls
    for (int i = 0; i < keypad[current_input].size();i++){
        print_keypad(input/10, keypad[current_input][i] + output,keypad);
    }
    return;
}
int main(){
    int input;
    std::cin >> input;
    std::string output = "";
    std::string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};
    print_keypad(input,output,keypad);
    return 0;
}
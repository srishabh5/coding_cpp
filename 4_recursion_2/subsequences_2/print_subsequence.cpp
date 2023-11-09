#include<iostream>
//using namespace std;
void print_subsequence(std::string input, std::string output){
    //base case
    // print the output whenever you hit the base case
    if(input.size() == 0){
        std::cout << output << std::endl;
        return;
    }
    //recursive call
    //two calls one without the current and with current

    print_subsequence(input.substr(1),output);
    print_subsequence(input.substr(1),output + input[0]);
    return;
}
int main(){
    std::string input;
    std::cin >> input;
    std::string output = "";//creating an empty output array
    print_subsequence(input, output);
    return 0;
}
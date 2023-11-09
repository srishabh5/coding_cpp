#include<iostream>
//using namespace std;
//we are returning the number of strings in the ouput array
int subsequence(std::string input, std::string output[]){
    //base case
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    //recursive call
    std::string substring = input.substr(1);//we want to pass the smaller input
    int small_output = subsequence(substring,output);//we get the count of the smaller output
    //small calculation
    for(int i = 0; i < small_output; i++){
        output[i + small_output] = input[0] + output[i];//just adding the first element to the array of small output
    }
    //this is the beauty i felt in seeing the code
    return 2 * small_output;
}

int main(){
    std::string input;
    std::cin >> input;
    std::string * output = new std::string[1000];
    int count = subsequence(input, output);
    for(int i = 0; i < count; i++){
        std::cout << output[i] << std::endl;
    }
    return 0;
}
//Suppose you have a string, S, made up of only 'a's and 'b's.
// Write a recursive function that checks if the string was 
//generated using the following rules:
//a. The string begins with an 'a'
//b. Each 'a' is followed by nothing or an 'a' or "bb"
//c. Each "bb" is followed by nothing or an 'a'
//If all the rules are followed by the given string, return true otherwise return false.

#include<iostream>
//using namespace std;
bool check_ab_a(std::string input){
    //base case and case for finding a
    if(input.size() == 0){
        return true;
    }
    if(input[0] =='a'){
        if (check_ab_a(input.substr(1))){
            return true;
        }
        return false;
    }
    if(input.substr(0,2) == "bb"){
        if(input[2] =='\0'){
            return true;
        }
        if (input[2] == 'a'){
            if(check_ab_a(input.substr(3))){
                return true;
            }
            else {return false;}
        }
        return false;}
    return false;
    }


bool check_ab (std::string input){
    //base case
    //just doing the easy stuff so lets make it run first and then will check for optimal solution
    
    if(input[0] == 'a'){
        if(check_ab_a(input.substr(1))){
            return true;
        }
        else return false;
    }
    return false;

}

int main(){
    //std:: string input = "abb";//true
    std:: string input = "abababa";//false
    
    std::cout << check_ab(input)<<std::endl;
    return 0;
}
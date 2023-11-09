//Given an input string S and two characters c1 and c2,
// you need to replace every occurrence of character
// c1 with character c2 in the given string.
//Do this recursively.
#include<iostream>
//using namespace std;
void replacechar(char input[], char c1,char c2){
    //base case
    if (input[0] == '\0'){
        return;
    }
    if(input[0] == c1){
        input[0] = c2;
        replacechar(input + 1,c1,c2);
    }else{
        replacechar(input+1,c1,c2);
    }
}

int main(){
    char input[100];
    char c1,c2;
    std::cin >> input >> c1 >> c2;
    replacechar(input,c1,c2);
    std::cout << input << std::endl;
    return 0; 
}
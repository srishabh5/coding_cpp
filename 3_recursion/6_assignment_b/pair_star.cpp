//Given a string S, compute recursively a new string where identical chars 
//that are adjacent in the original string are separated from each other by a "*".
//input hello 
//output hel*lo
#include<iostream>
//using namespace std;
int len_str(char input[]){
    int i = 0;
    for (;input[i]!='\0';i++){

    }
    return i;
}
void pairstar(char input[]){
    //base case
    if(input[0] =='\0' || input[1] == '\0'){
        return;
    }
    //recursive call
    pairstar(input+1);
    //small_calculation
    if(input[0] == input[1]){
        int length = len_str(input);
        for(int i = length; i > 0;i--){
            input[i+1] =input[i];
        }
        input[1] = '*';
        //return;
    }
    //else return;
    return;
}
int main(){
    char input[100];
    std::cin.getline(input,100);
    pairstar(input);
    std::cout << input << std::endl;
}
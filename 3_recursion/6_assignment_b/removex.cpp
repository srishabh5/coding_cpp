//Given a string, compute recursively a new string where all 'x' chars have been removed.
#include<iostream>
//using namespace std;
int length(char input[]){
    int i = 0;
    for (;input[i]!='\0';i++){}
    std::cout << i << std::endl;
    return i;
}

void removex(char input[]){
    //base case
    if(input[0]=='\0'){
        return;
    }
    //small calculation
    //this shows how just to remove a single character we need to shift all the characters
    if(input[0]=='x'){
        int arr_len = length(input);
        for(int j=0; j < arr_len;j++){
            input[j] = input[j+1];
        }
        removex(input);//if we skip it to input+1 then if there is consecutive xx then we wont be 
        //able to get rid of it as it wont be visible to us anymore
    }
    else{
        removex(input+1);
    }
    //removex(input + 1);
    return;
}

int main(){
    char input[1000];
    std::cin.getline(input,1000);
    removex(input);
    std::cout << input << std::endl; 
}
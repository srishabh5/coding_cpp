//Given a string, compute recursively 
//a new string where all appearances of "pi" have been replaced by "3.14".
#include<iostream>
//using namespace std;
int length (char arr[]){
    int i = 0;
    for (;arr[i]!='\0';i++){
    }
    return i;
}
void replace_pi(char arr[]){
    //base case
    if(arr[0]== '\0'||arr[0+1]=='\0'){
        return;
    }
    //small calculation step
    if(arr[0]=='p'){
        if(arr[1] == 'i'){
            //we can only append at last bcz we created an empty array in this fashion
            //so first we add "\0" at last two elements 
            //to know the last index we need to calculate length every time
            int arr_len = length(arr);
            arr[arr_len+1] = '\0';
            arr[arr_len+2] = '\0';
            //now shift all the contents which we have to do element by element
            //we need to do it moving backwards 
            for (int j = arr_len; j > 0; j--){
                arr[j+1] = arr[j-1]; 
            }
            arr[0] ='3';
            arr[1] ='.';
            arr[2] = '1';
            arr[3] = '4';
            replace_pi(arr+2);
        }
        else {
            replace_pi(arr + 1);
        }
    }
    else{
        replace_pi(arr+1);
    }
    return;
}

int main(){
    char input[1000];
    std::cin.getline(input,1000);
    replace_pi(input);
    std::cout << input << std::endl;
}
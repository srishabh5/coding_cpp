//Check whether a given String S is a palindrome using recursion. Return true or false.
#include<iostream>
//using namespace std;
int len_string (char arr[]){
    int i = 0;
    for(;arr[i]!='\0';i++){
    }
    return i;
}
bool check_palindrome(char input[],int start,int end){
    //base case

    //why did they add this also

    if(input[0] == '\0' || input[1] == '\0'){
        return true;
    }


    if(start >= end){
        return true;
    }
    //recursive call
    //i want to shorten the array from both sides 
    //but before that i should first check the first and last element are they equal
    // the point is how to get to the last element
    // i am figuring out to not traverse through the array every time
    //this would be of no use if we traverse throughout the string every time
    // the way is to calculate the size beforehand before the base case 

    //i am wondering how to not store the char array 
    //and calculate size without changing the contents of the array

    if(input[start] == input[end]){
        /*
        if(check_palindrome(input, start + 1, end - 1)){
            return true;
        }
        else {return false;}
        */
    
        return check_palindrome(input, start + 1, end - 1);
    }
    else {
        return false;
    }
}
int main(){
    char arr[] = "raceefcar";
    int length_string = len_string(arr);
    //passing the start index and last index
    std::cout << check_palindrome(arr, 0, length_string-1) << std::endl;
    return 0;
}
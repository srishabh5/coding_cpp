#include<iostream>
using namespace std;

//option 3

int max (int a ,int b){
    return (a > b) ? a : b;
}


//option 4
inline int max_inline (int a ,int b){
    return (a > b) ? a : b;
}
 
int main(){
    int a, b;
    cin >> a >> b;
    //option 1
    int c;
    if (a > b){
        c = a;
    } else{
        c = b;
    }
    //option 2
    
    //shortcut tertiary operator
    int c = (a > b) ? a : b;
    //it is still not a very good code
    //bcz we still have to think and write it
    //other option is to write a max function
    
    //option 3
    int c = max(a,b);    
    //readabily improved
    //but everytime you make a call it takes time to solve the fn transfer the values
    //there will be a performance hit

    //option 4
    //we want code readability and no performance hit

    // declare the function to be inline
    int c = max_inline(a,b);  
}
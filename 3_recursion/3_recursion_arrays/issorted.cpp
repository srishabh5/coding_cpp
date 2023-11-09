#include<iostream>
using namespace std;
bool issorted(int* arr, int size){
    //base case
    if (size == 0 || size == 1){
        return true;
    }
    //hypothesis
    /* this is wrong as we are checking the whole array before checking the first two elements
    if(issorted(arr + 1, size - 1)){
        if(*arr <= *(arr + 1)){
            return true;
        }
        else return false;
    }
    else return false;
    */

   if (*arr > *(arr+1)){
    return false;
   }
   /*
   if(issorted(arr+1,size-1)){
    return true;
   }
   else return false;
   */

  return issorted(arr+1,size-1);

}
int main(){
    int arr[] = {1,2,8,4,5};
    cout << issorted(arr,5) << endl;
    return 0;
}
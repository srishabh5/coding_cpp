//Tower of Hanoi is a mathematical puzzle where we have three rods and n disks.
// The objective of the puzzle is to move all disks from source rod to destination
// rod using third rod (say auxiliary).
// The rules are :
//1) Only one disk can be moved at a time.
//2) A disk can be moved only if it is on the top of a rod.
//3) No disk can be placed on the top of a smaller disk.

//Print the steps required to move n disks from source rod to destination rod.
//Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.

#include<iostream>
//using namespace std;
void towerofhanoi(int input,char a, char b, char c){
    //base case
    if (input <= 0){
        return;
    }
    if(input == 1){
        std::cout << a << " -> " << c << std::endl;
        return;
    }
    //recursive call
    towerofhanoi(input - 1, a, c, b);
    std::cout << a << " -> " << c << std::endl;
    //if (input < 2){return;}    
    towerofhanoi(input - 1, b, a, c);
    /*
    std::cout << b << " -> " << c << std::endl;
    if(input >= 3){
        towerofhanoi(input-3,a,c,b);
        std::cout << a << " -> " << c << std::endl;
    }*/

    return;
}
int main(){
    int input;
    //char a,b,c;
    std::cin >> input ;
    towerofhanoi(input,'a','b','c');
    return 0;
}
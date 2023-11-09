#include<iostream>
using namespace std;
int main(){
    int row = 0, col = 0;
    cout << "size of array" << endl;
    cin >> row >> col;
    int **p = new int*[row];
    for (int i = 0; i < row; i++){
        p[i] = new int[col];
        for (int j = 0; j < col; j++){
            cin >> p[i][j];
        }
    }
    //how to delete now
    for (int i = 0; i < row; i++){
        delete []p[i];
    }
    delete []p;
}
#include<iostream>
using namespace std;
void incrementor(int *p){
	(*p)++;
}

int main(){
	int i = 65;
	char c = i;//implicit typecasting
	cout << c << endl;
	int *p = &i;
	cout << p << endl;
	incrementor(p);
	cout << p << endl;
	cout << i << endl;
}
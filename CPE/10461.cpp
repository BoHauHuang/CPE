#include<iostream>
using namespace std;

int num;

int main(){
	while(cin >> num){
		if(num == 0) break;
		int binary[32]={}, counter = 0, parity = 1, input;
		for(input = num ; input >= 2 ; input = input/2){
			binary[counter] = input % 2;
			counter++;
		}
		cout << "The parity of " << input;
		for(int i = counter-1 ; i >= 0 ; i--){
			cout << binary[i];
			if(binary[i] == 1) parity++;
		}
		cout << " is " << parity << " (mod 2)." << endl;
	}
} 

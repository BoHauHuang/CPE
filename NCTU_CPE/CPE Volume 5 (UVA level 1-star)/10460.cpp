#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string input;
	while(cin >> input){
		if(input == "0") break;
		int odd = 0, even = 0;
		for(int i = 0 ; i < input.length() ; i++){
			if(i%2 == 0) odd += (int)input[i] - '0';
			else even += (int)input[i] - '0';
		}
		int dif = odd - even;
		if(dif < 0) dif = 0-dif;
		
		if(dif%11 == 0) cout << input << " is a multiple of 11." << endl;
		else cout << input << " is not a multiple of 11." << endl;
	}
} 

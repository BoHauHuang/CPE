#include<iostream>
#include<string>
using namespace std;

int main(){
	char list[46] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                     	'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
                       	'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
                      	'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
    string input;
	while(getline(cin, input)){
		int len = input.length();
		for(int i = 0 ; i < len ; i++){
			if(input[i] == ' ') cout << " ";
			for(int j = 0 ; j < 46 ; j++){
				if(input[i] == list[j]) cout << list[j-1];
			}
		}
		cout << endl;
	}                  	
	
}

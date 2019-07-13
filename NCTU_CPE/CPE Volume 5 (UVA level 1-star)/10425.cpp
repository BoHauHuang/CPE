#include<iostream>
using namespace std;

char listl[] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                       'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\',
                       'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'',
                       'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
char listu[] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
                   		'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
                      	'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
                     	'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
string input;

int main(){
	while(getline(cin, input)){
		int len = input.length();
		for(int i = 0 ; i < len ; i++){
			if(input[i] == ' ') cout << " ";
			if(input[i] == '\n') cout << endl;
			
			for(int j = 0 ; j < 47 ; j++){
				if(input[i] == listl[j]){
					cout << listl[j-2] ;
					break;
				}
				if(input[i] == listu[j]){
					cout << listl[j-2];
					break;
				}
			}
		}
		cout << endl;
	}
}

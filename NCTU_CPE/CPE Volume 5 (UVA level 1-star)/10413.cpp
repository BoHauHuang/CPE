#include<iostream>
#include<sstream>
using namespace std;

int multiple;
string input;

int main(){
	while(cin >> input){
		int counter = 0;
		long long total = 0;
		int len = input.size();
		int max = 0;
		if(input == "0"){
			cout << ++multiple << endl;
			continue;
		}
		for(int sub = 0 ; sub < len ; sub++){
			if('a' <= input[sub] && input[sub] <= 'z'){
				counter = input[sub] - 'a' + 36; 
			}
			if('A' <= input[sub] && input[sub] <= 'Z'){
				counter = input[sub] - 'A' + 10; 
			}
			if('0' <= input[sub] && input[sub] <= '9'){
				counter = input[sub] - '0';
			}
			if(counter > max) max = counter;
			total += counter;
		}
		for(int count = max ; count < 62 ; count++){
			if(total % count == 0){
				multiple = count;
				break;
			}
		}
		
		if(!(total%multiple)) cout << ++multiple << endl;
		else cout << "such number is impossible!" << endl;
	}
} 

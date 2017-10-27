#include<iostream>
#include<string>
#include<sstream>
#define NUM 1000000
using namespace std;
int prime[NUM], flag[NUM];

int main(){
	string input;
	int counter = 0;
	for(int i = 2 ; i <= 1000000 ; i++){
		if(flag[i] == 0){
			prime[counter] = i;
			counter++;
			for(int j = 2 ; i*j <= 1000000 ; j++){
				flag[i*j] = 1;
			}
		}
	}
	
	while(cin >> input){
		int numa, numb;
		stringstream ss;
		int len = input.length();
		
		ss.str(input);
		ss >> dec >> numa;
		ss.clear();
		
		for(int i = 0 ; i < len/2 ; i++){
			char temp = input[i];
			input[i] = input[len - 1 - i];
			input[len - 1 -i] = temp;
		}
		ss.str(input);
		ss >> dec >> numb;
		
		bool pri = false, emi = false;
		
		for(int k = 0 ; k < counter ; k++){
			if(numa == prime[k]){
				pri = true;
				for(int m = 0 ; m < counter ; m++){
					if(numb == prime[m]) emi = true;
				}
			}
		}
		
		if(!pri) cout << numa << " is not prime." << endl;
		if(pri && !emi) cout << numa << " is prime." << endl;
		if(numa == numb && emi) cout << numa << " is prime." << endl;
		if(emi && numa != numb) cout << numa << " is emirp." << endl;
	}
}

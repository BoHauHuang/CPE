#include<iostream>
#include<string>
using namespace std;

int main(){
	int total;
	int one[10] = {0,1,1,2,1,2,2,3,1,2};
	cin >> total;
	
	while(total > 0){
		string input;
		int decimal = 0, decone = 0, hexone = 0;
		cin >> input;
		int len = input.length();
		int dec = 1;
		
		for(int i = len-1 ; i >= 0 ; i--){
			int a = (int)input[i] - 48;
			decimal += a*dec;
			dec *= 10;
		}
		while(decimal > 0){
			if(decimal % 2) decone++;
			decimal /= 2;
		}
		
		for(int j = 0 ; j < len ; j++){
			int a = (int)input[j] - 48;
			hexone += one[a];
		}
		
		cout << decone << " " << hexone << endl; 
		total--;
	}
}

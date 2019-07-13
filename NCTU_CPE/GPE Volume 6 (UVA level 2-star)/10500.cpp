#include<iostream>
using namespace std;

unsigned long long int num[51], input;

int main(){
	while(cin >> input){
		if(input == 0)break;
		num[1] = 1;
		num[2] = 2;
		for(int counter = 3 ; counter <= 50 ; counter++){
			num[counter] = num[counter-1] + num[counter-2];
		}
		cout << num[input] << endl;
	}
	
}

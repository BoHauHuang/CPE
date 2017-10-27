#include<iostream>
using namespace std;

int num, ones, counter;

int main(){
	while(cin >> num){
		if(num == 0) break;
		ones = 1%num;
		counter = 1;
		for(;ones > 0;){
			ones *= 10;
			ones++;
			ones %= num;
			counter++;
		}
		cout << counter << endl;
	}
}

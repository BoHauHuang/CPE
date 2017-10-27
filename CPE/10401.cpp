#include<iostream>
using namespace std;

int main(){
	int fib[40];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2 ; i < 40 ; i++)
		fib[i] = fib[i-1] + fib[i-2];
	
	int total, count = 0;
	cin >> total;
	
	
	while(total > count){
		int num, start = 0;
		
		cin >> num;
		cout << num << " = ";
		
		for(int i = 39 ; i >= 2 ; i--){
			if(num >= fib[i]){
				start = i;
				break;
			}
		}
		
		for(int i = start ; i >= 2 ; i--){
			if(num >= fib[i]){
				num -= fib[i];
				cout << "1";
			}
			else cout << "0";
		}
		cout << " (fib)" << endl;
		count++;
	}
	
}

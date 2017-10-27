#include<iostream>

using namespace std;

long long num;
int flag;

int main(){
	while(cin >> num){
		long long factorial = 1, counter;
		flag = false;
		if(num > 0){
			for(counter = 1 ; counter <= num ; counter++){
				factorial *=  counter;
				if(factorial > 6227020800){
					cout << "Overflow!" << endl;
					flag = true;
					break;
				}
			}
			if(!flag){
				if(factorial < 10000) cout << "Underflow!" << endl;
				else cout << factorial << endl;
			}
		}
		else{
			num = -num;
			if(num%2 == 0) cout << "Underflow!" << endl;
			else cout << "Overflow!" << endl;
			}
	}
}

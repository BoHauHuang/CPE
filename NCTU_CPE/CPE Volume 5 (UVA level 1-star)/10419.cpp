#include<iostream>
using namespace std;

int main(){
	long long multiple, divide;
	while(cin >> multiple >> divide){
		long long counter = 1;
		int flag = 1;
		
		
		for(int a = divide ; ;){
			if(a == multiple)break;
			else if (a > multiple){
				flag = 0;
				break;
			}
			a *= divide;
			counter++;
		}
		
		long long list[counter+1];
		if(!flag) cout << "Boring!" << endl;
		if(flag){
			list[counter] = multiple;
			cout << list[counter] << " ";
			for(int a = counter-1 ; a >= 0 ; a--){
				list[a] = list[a+1]/divide;
				if(a > 0) cout << list[a] << " ";
				if(a == 0) cout << list[a] << endl;
			}
			
		}
		
	}
}

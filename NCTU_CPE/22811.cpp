#include<iostream>
using namespace std;

int cars, count, total, a, b;

int main(){
	cin >> count;
	while(count > 0){
		--count;
		total = 0;
		cin >> cars;
		int train[cars+1];
		for(int i = 1 ; i < cars+1 ; i++){
			cin >> train[i];
		}
		for(a = 1 ; a < cars+1 ; a++){
			for(b = a ; b < cars+1 ; b++){
				if(train[a] > train[b]){
					int temp = train[a];
					train[a] = train[b];
					train[b] = temp;
					total++;
				}
			}
		}
		cout << "Optimal train swapping takes " << total << " swaps." << endl; 
		
	} 
} 

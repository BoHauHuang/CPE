#include<iostream>
using namespace std;

int prime[10001] = {}, number[10001]={};
int input, sum, num, counter, total, pc, i, j;

int main(){
	while(cin >> input){
		pc = 0;
		total = 0;
		num = 0;#include<iostream>
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
		for(i = 2 ; i <= 10000 ; i++){
			if(number[i] == 0){
				prime[pc] = i;
				pc++;
				for(j = 2 ; i*j<= 10000 ; j++){
					number[i*j] = 1;
				}
			}
		}
		if(input == 0) break;
		re:
		sum = 0;
		for(counter = num ; counter <= pc ; counter++){
			if(sum < input) sum += prime[counter];
			else if(sum > input){
				num++;
				goto re;
			}
			else{
				total++;
				num++;
				if (prime[num] > input) break;
				goto re;
			}
		}
		cout << total << endl;
	}
}

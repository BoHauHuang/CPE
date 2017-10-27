#include<iostream>
using namespace std;

int total, counter = 1;

int main(){
	while(!cin.eof()){
		cin >> total;
		if(total == 0) break;
		long long num[total], negative[total], i = 0, product, max = 0;
		while(total > 0){
			cin >> num[i];
			i++;
			total--;
		}
		for(int m = 0 ; m < i ; m++){
			product = 1;
			for(int j = m ; j < i ; j++){
				product *= num[j];
				if(product > max) max = product;
			}
		}
		
		cout << "Case #" << counter << ": The maximum product is " << max << "." << endl << endl;
		counter++;
	}
}

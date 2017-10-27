#include<iostream>

using namespace std;

int p, q;

int main(){
	while(cin >> p >> q){
		if(p < 0 && q < 0) break;
		int sum = 0, start;
		for(p = p ; p <= q ; p++){
			start = p;
			while(start%10 == 0){
				start/=10;
			} 
			sum += start%10;
		}
		cout << sum << endl;
	}
} 

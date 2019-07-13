#include<iostream>
using namespace std;

int alter[1001]={}, sum, input, counter = 1;

int main(){
	for(int i = 1 ; i < 1001 ; i++){
		sum = 1;
		for(int j = 2 ; j <= i ; j++){
			if(i%j == 0) sum += j;
		}
		if(sum < 1001) alter[sum] = i;
	}
	while(cin >> input){
		if(input == 0) break;
		if(alter[input] > 0) cout << "Case " << counter << ": " << alter[input] << endl; 
		if(alter[input] == 0) cout << "Case " << counter << ": -1" << endl; 
		counter++;
	}
}

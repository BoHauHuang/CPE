#include<iostream>
using namespace std;

int counter = 0, num[10001], input, mid;

int main(){
	while(cin >> input){
		num[counter] = input;
		for(int i = 0 ; i < counter ; i++){
			if(num[counter] > num[i]){
				int temp = num[i];
				num[i] = num[counter];
				num[counter] = temp;
			}
		}
		counter++;
		
		mid = 0;
		if(counter % 2  == 0){
			int sum = num[counter/2] + num[counter/2-1];
			mid = sum/2;
		}
		if(counter % 2 == 1){
			if(counter == 1) mid = num[0];
			else mid = num [counter/2];
		}
		cout << mid << endl;
		
	}
}

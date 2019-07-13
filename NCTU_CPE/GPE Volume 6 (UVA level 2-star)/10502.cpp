#include<iostream>
using namespace std;

int main(){
	long long input, num[10], count;
	
	while(cin >> count){
		while(count--){
			cin >> input;
			long long origin = input;
			for(int i = 0 ; i < 10 ; i++)
				num[i] = 0;
			
			bool flag = true;
			
			while(1){
				if(input%2 == 0) input/=2, num[2]++;
				else break;
			}
			while(1){
				if(input%3 == 0) input/=3, num[3]++;
				else break;
			}
			while(1){
				if(input%5 == 0) input/=5, num[5]++;
				else break;
			}
			while(1){
				if(input%7 == 0) input/=7, num[7]++;
				else break;
			}
			
			if(input != 1) flag = false;
			
			while(num[2] >= 3){
				num[2] -= 3;
				num[8]++;
			}
			while(num[3] >= 2){
				num[3] -= 2;
				num[9]++;
			}
			while(num[2] >= 1 && num[3] >= 1){
				num[2]--;
				num[3]--;
				num[6]++;
			}
			while(num[2] >= 2){
				num[2] -= 2;
				num[4]++;
			}
			
			if(flag){
				if(origin == 1) cout << "1";
				else{
					for(int k = 2 ; k < 10 ; k++){
						while(num[k] > 0){
							cout << k;
							num[k]--;
						}
					}	
				}
				cout << endl;
			}
			
			if(!flag) cout << "-1" << endl;
			
		}
	}
} 

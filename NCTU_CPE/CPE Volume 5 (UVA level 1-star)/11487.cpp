#include<iostream>
#define LEN 1000
using namespace std;

int main(){
	int num[LEN], k, sub[LEN];
	while(cin >> k){
		for(int i = 0 ; i < LEN ; i++){
			num[i] = 0;
			sub[i] = 0;
		}
		int carry = 0;
		bool flag = false;
		sub[LEN-1] = 1;
		num[LEN-1] = 1;
		for(int i = 1 ; i < k ; i++){
			for(int j = LEN-1 ; j >= 0 ; j--){
				int temp = num[j];
				num[j] = (sub[j]+num[j]+carry)%10;
				carry = (sub[j] + temp + carry)/10;
				sub[j] = temp;
				
			}
		}
		for(int k = 0 ; k < LEN ; k++){
			if(!flag && sub[k] != 0){
				cout << sub[k];
				flag = true;
			}
			else if(flag){
				cout << sub[k];
			}
		}
		cout << endl;
		
		
	}
	
	
}

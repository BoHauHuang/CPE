#include<iostream>
#define NUM 1000001
using namespace std;
int flag[NUM], prime[NUM], primef[NUM];
int fa, counter, count;

int main(){
	while(cin >> fa){
		if(fa == 0) break;
		int total = 0;
		counter = 0;
		flag[0] = 1;
		flag[1] = 1;
		for(int i = 2 ; i <= 1000000 ; i++){
			if(flag[i] == 0){
				prime[counter] = i;
				primef[counter] = 0;
				counter++;
				for(int j = 2 ; i*j <= 1000000 ; j++){
					flag[i*j] = 1;
				}
			}
		}
		for(int k = 0 ; k < counter ; k++){
			if(fa % prime[k] == 0 && prime[k] > 1){
				int a = prime[k];
				if(primef[a] == 0){
					primef[a]++;
					total++;
				}
			}
		}
		cout << fa << " : " << total << endl;
	}
}

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int num_p = 0;
int prime[50000];
int not_p[50000];
int inrange_list[1000001];
int in_range[1000001];

void set_prime(){
	
	// init
	memset(not_p, 0, sizeof(not_p));
	
	not_p[0] = 1;
	not_p[1] = 1;
	// select prime
	for(int i = 2 ; i < 46341 ; i++){
		if(!not_p[i]){
			prime[num_p++] = i;
			for(int j = 2*i ; j < 46341 ; j += i){
				not_p[j] = 1;
			}
		}
	}
}


void set_list(int L, int U){
	
	memset(inrange_list, 0, sizeof(inrange_list));
	
	for(int i = 0 ; i < num_p ; i++){
		int product = (L-1)/prime[i]+1;
		if(product < 2) product = 2;
		
		for(unsigned int j = product*prime[i] ; j <= U ; j+=prime[i]){
			inrange_list[j-L] = 1;
		}
			
	}
}


int main(){
	set_prime();
	int L, U;

	while(cin >> L >> U){
		set_list(L,U);
		
		int count = 0;
		
		for(unsigned int i = L ; i <= U ; i++){
			if(i > 1 && !inrange_list[i-L]) in_range[count++] = i;
		}
		
		if(count < 2) cout << "There are no adjacent primes." << endl;
		else{
			int max = -2147483647, min = 2147483647, far_a = 0, far_b = 0, close_a = 0, close_b = 0;

			for(int i = 1 ; i < count ; i++){
				int diff = in_range[i] - in_range[i-1];
				if(diff > max){
					max = diff;
					far_a = in_range[i-1];
					far_b = in_range[i];
				}
				if(diff < min){
					min = diff;
					close_a = in_range[i-1];
					close_b = in_range[i];
				}
			}
			cout << close_a << "," << close_b << " are closest, " << far_a << "," << far_b << " are most distant." << endl;
		}
		
	}
	
	
	return 0;
} 

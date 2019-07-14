#include<bits/stdc++.h>
using namespace std;

int not_prime[65010], n;

void init(){
	memset(not_prime, 0, sizeof(not_prime));
	not_prime[0] = 1;
	not_prime[1] = 1;
	
	for(int i = 2 ; i < 65000 ; i++){
		if(!not_prime[i]){
			for(int j = 2 ; i*j < 65000 ; j++){
				not_prime[i*j] = 1;
			}
		}
	}
}

long long int test(int a){
	long long int ans = 1, exp = n, tmp = a;
	while(exp){
		if(exp%2) ans = (ans*tmp)%n;
		
		tmp = (tmp*tmp)%n;
		exp >>= 1;
	}
	
	return ans;
}

int main(){
	init();

	while(cin >> n && n){
		if(not_prime[n]){
			bool done = false;
			
			for(int a = 2 ; a < n ; a++){
				if(test(a) != a){
					cout << n << " is normal." << endl;
					done = true;
					break;
				}
			}
			if(!done) cout << "The number " << n << " is a Carmichael number." << endl;
		}
		else cout << n << " is normal." << endl;
	}
	
	return 0;
}

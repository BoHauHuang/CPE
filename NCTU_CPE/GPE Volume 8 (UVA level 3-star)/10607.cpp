#include<bits/stdc++.h>
using namespace std;
int notprime[100000];
vector<int> prime;

void build_prime(){
	notprime[0] = 1;
	notprime[1] = 1;
	for(int i = 2 ; i < 100000 ; i++){
		for(int j = 2 ; j*i < 100000 ; j++){
			notprime[i*j] = 1;
		}
	}
	for(int i = 0 ; i < 100000 ; i++){
		if(!notprime[i]) prime.push_back(i);
	}
}


int main(){
	int n;
	build_prime();
	while(cin >> n){
		if(!n) return 0;
		deque<int> man;
		
		for(int i = 1 ; i <= n ; i++)
			man.push_back(i);
			
		for(int i = 0 ; i < n-1 ; i++){
			int next = prime[i]-1;
			if(next >= man.size()) next %= man.size();
			while(next--){
				int out = man.front();
				man.pop_front();
				man.push_back(out);
			}
			man.pop_front();
		}
		cout << man.front() << endl;
	}
	return 0;
}

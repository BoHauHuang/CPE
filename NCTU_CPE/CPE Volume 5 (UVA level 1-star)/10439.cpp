#include<iostream>
using namespace std;

int main(){
	int n, k, add, ans;
	while(cin >> n >> k){
		ans = n;
		add = 0;
		while(n >= k){
			n -= k-1;
			add++;
		}
		cout << ans+add << endl;
	}
}

#include<iostream>
using namespace std;


long long mod(long long b, long long p, long long m){
	if(p == 1) return b;
	else if (p == 0) return 1;
	else if(p%2 == 0) return (mod(b, p/2, m)%m)*(mod(b, p/2, m)%m);
	else return (b%m)*(mod(b, p/2, m)%m)*(mod(b, p/2, m)%m);
}

int main(){
	long long b, p, m;
	while(cin >> b){
		cin >> p >> m;
		long long ans = mod(b, p, m)%m;
		cout << ans << endl;
	}
} 

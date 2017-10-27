#include<iostream>
using namespace std;

int f91(int n){
	if(n <= 100) n = f91(n+11);
	else if (n >= 101) n = n-10;
	else return f91(n);
}



int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		
		if(n >= 101) cout << "f91(" << n << ") = " << n-10 << endl;
		else cout << "f91(" << n << ") = 91" << endl;
	}
}

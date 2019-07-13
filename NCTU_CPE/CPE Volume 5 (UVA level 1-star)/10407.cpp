#include<iostream>

using namespace std;

long long int a, b;

int main(){
	while(cin >> a >> b){
		if(b > a) cout << b-a << endl;
		if(a > b) cout << a-b << endl;
		if(a == b) cout << "0" << endl;
	}
	return 0;
} 

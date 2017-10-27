#include<iostream>
using namespace std;

int main(){
	int count;
	while(cin >> count){
		while(count > 0){
			int n, m;
			cin >> n >> m;
			
			n /= 3;
			m /= 3;
			
			cout << n*m << endl;
		
			count--;
		}
	}
} 

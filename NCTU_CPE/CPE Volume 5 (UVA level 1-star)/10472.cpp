#include<iostream>
using namespace std;

int main(){
	int count;
	while(cin >> count){
		while(count > 0){
			int n, m, counter = 0;
			bool flag = true;
			
			cin >> n >> m;
			if(m > n){
				flag = false;
				cout << "cannot do this" << endl;
			}
			if(flag){
				while(n > 1){
					n -= m;
					if(n < 0){
						flag = false;
						cout << "cannot do this" << endl;
					}
					n++;
					counter++;
				}
			}
			
			
			if(flag) cout << counter << endl;
			
			count--;
		}
	}
} 

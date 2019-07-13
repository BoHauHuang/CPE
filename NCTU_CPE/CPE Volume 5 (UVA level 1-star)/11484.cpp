#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n > 0){
		int e, f, c;
		cin >> e >> f >> c;
		int bottle = e + f;
		int counter = 0;
		while(bottle >= c){
			bottle -= c;
			bottle++;
			counter++;
		}
		cout << counter << endl;
		n--;
	}
}

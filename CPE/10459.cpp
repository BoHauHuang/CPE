#include<iostream>
using namespace std;

int main(){
	unsigned long long int n, f, counter = 1, count = 0;
	while(cin >> n >> f){
		if(count > 0) cout << endl;
		unsigned long long int money, sum = 0;
		if(n == 0 && f == 0) break;
		while(n > 0){
			cin >> money;
			sum += money;
			n--;
		}
		cout << "Bill #" << counter << " costs " << sum << ": each friend should pay " << sum/f << endl;
		counter++;
		count++;
	}
}

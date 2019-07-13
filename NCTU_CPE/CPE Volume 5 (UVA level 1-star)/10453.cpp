#include<iostream>

using namespace std;

int total, a, b, odd, counter;

int main(){
	while(cin >> total){
		int n = 1;
		while(n <= total){
			odd = 0;
			cin >> a >> b;
			for(counter = a ; counter <= b ; counter++){
				if(counter%2 != 0)odd += counter;
				else odd = odd;
			}
		cout << "Case " << n << ": " << odd << endl;
		n++;
		}
	}
	return 0;
}

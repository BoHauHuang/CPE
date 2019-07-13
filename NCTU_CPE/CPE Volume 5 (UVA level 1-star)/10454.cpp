#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
		while(n > 0){
			long long s, d;
			cin >> s >> d;
			if(d <= s && (s+d)%2 == 0 && (s-d)%2 == 0)
				cout << (s+d)/2 << " " << (s-d)/2 << endl;
			else cout << "impossible" << endl;
			
			n--;
		}
	}

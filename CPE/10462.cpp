#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		int card[n];
		for(int i = 0 ; i < n ; i++){
			card[i] = i+1;
		}
		int k = n;
		cout << "Discarded cards:";
		while(k > 1){
			if(k == 2) cout << " " << card[0] << endl;
			else cout << " " << card[0] << ",";
			
			int temp = card[1];
			
			for(int i = 0 ; i < n-2 ; i++){
				card[i] = card[i+2];
			}
			card[n-2] = temp;
			n--;
			k--;
		}
		cout << "Remaining card: " << card[0] << endl;
		
	}
}

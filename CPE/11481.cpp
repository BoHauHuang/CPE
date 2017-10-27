#include<iostream>
using namespace std;

int main(){
	int n, count = 1;
	while(cin >> n){
		if(n == 0) break;
		int map[n][n];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> map[i][j];
			}
		}
		cout << "Case " << count << ": ";
		int k = 0;
		int counter = n+1;
		int counts = 0;
		while(counter/2 > 0){
			
			long long sum = 0;
			
			for(int i = k ; i <= n-k-1 ; i++){
				for(int j = k ; j <= n-k-1 ; j++){
					if(i != k && j == k) {
						sum += map[i][j];
					}
					else if(i != k && j == n-k-1){
						sum += map[i][j];
					}
					else if(i == k || i == n-k-1){
						sum += map[i][j];
					}
				}
			}
			if(counts > 0) cout << " ";
			cout << sum;
			counts++;
			k++;
			counter -= 2;
		}
		cout << endl;
		count++;
	}
} 

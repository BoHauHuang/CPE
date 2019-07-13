#include<iostream>
using namespace std;

int main(){
	int count, counter = 1;
	while(cin >> count){
		while(count > 0){
			char a[2];
			int n;
			cin >> a[0] >> a[1] >> n;
			int num[n][n], map[n][n];
			
			for(int i = 0 ; i < n ; i++){
				for(int j = 0 ; j < n ; j++){
					cin >> num[i][j];
					map[n-i-1][n-j-1] = num[i][j];
				}
			}
			bool flag = true;
			
			for(int i = 0 ; i < n ; i++){
				for(int j = 0 ; j < n ; j++){
					if(map[i][j] != num[i][j]){
						flag = false;
						break;
					}
				}
			}
			
			if(flag) cout << "Test #" << counter << ": Symmetric." << endl;
			else cout << "Test #" << counter << ": Non-symmetric." << endl;
			
			counter++;
			count--;
		}
	}
}

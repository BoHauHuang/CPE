#include<iostream>
using namespace std;

int main(){
	int games, a, count = 0;
	cin >> games;
	while(games > 0){
		if(count > 0) cout << endl;
		count++;
		cin >> a;
		char mine[a][a], solve[a][a], ans[a][a];
		
		for(int i = 0 ; i < a ; i++){
			for(int j = 0 ; j < a ; j++){
				cin >> mine[i][j];
				ans[i][j] = '0';
			}
		}
		for(int i = 0 ; i < a ; i++){
			for(int j = 0 ; j < a ; j++){
				cin >> solve[i][j];
			}
		}
		for(int k = 0 ; k < a ; k++){
			for(int m = 0 ; m < a ; m++){
				if(mine[k][m] == '*'){
					for(int l = k-1 ; l <= k+1 ; l++){
						for(int n = m-1 ; n <= m+1 ; n++){
							if(l >= 0 && n >= 0 && l < a && n < a)
								if(mine[l][n] != '*') ans[l][n]++;
								if(mine[l][n] == '*') ans[l][n] = '*';
						}
					}
				}
			} 
		}
		
		for(int i = 0 ; i < a ; i++){
			for(int j = 0 ; j < a ; j++){
				if(solve[i][j] == 'x') cout << ans[i][j];
				else cout << ".";
			}
			cout << endl;
		}
		
		games--;
	}
	
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	int m, n, counter = 0, space = 0;
	while(cin >> m >> n){
		if(m == 0 || n == 0) break;
		if(space > 0) cout << endl;
		
		space++;
		counter++;
		char maps[m][n];
		string word;
		
		// get stars
		for(int i = 0 ; i < m ; i++){
			cin >> word;
			for(int j = 0 ; j < n ; j++){
				if(word[j] == '*') maps[i][j] = word[j];
				else maps[i][j] = 48;
			}
		}
		
		//sweep the map
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(maps[i][j] == '*'){
					for(int k = i-1 ; k <= i+1 ; k++){
						for(int t = j-1 ; t <= j+1 ; t++){
							if(k >= 0 && t >= 0 && k < m && t < n){
								if(maps[k][t] != '*') maps[k][t]++;
							} 
						}
					}
				}
			}
		}
		
		cout << "Field #" << counter << ":" << endl;
		
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				cout << maps[i][j];
			}
			cout << endl;
		}
		
		
	}
}

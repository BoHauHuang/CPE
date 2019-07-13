#include<iostream>
#include<string>
using namespace std;

int main(){
	int row, col, turtle, move;
	while(cin >> row >> col >> turtle >> move){
		int posrow[turtle+1], poscol[turtle+1], num, map[row][col], count;
		string direction;
		for(int i = 1 ; i <= turtle ; i++){
			cin >> count;
			cin >> posrow[count] >> poscol[count];
		}
	
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				map[i][j] = 0;
			}
		}
		
		for(int j = 0 ; j < move ; j++){
			cin >> num >> direction;
			
			if(direction == "S"){
				if(posrow[num]+1 < row) posrow[num]++;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num]== poscol[i] && num != i){
						posrow[num]--;
						break;
					}
				}
			}
			
			else if(direction == "N"){
				if(posrow[num]-1 >= 0) posrow[num]--;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						posrow[num]++;
						break;
					}
				}
			}
			
			else if(direction == "W"){
				if(poscol[num]-1 >= 0) poscol[num]--;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						poscol[num]++;
						break;
					}
				}
			}
			
			else if(direction == "E"){
				if(poscol[num]+1 < col) poscol[num]++;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						poscol[num]--;
						break;
					}
				}
			}
			
			else if(direction == "NE"){
				if(posrow[num]-1 >= 0 && poscol[num]+1 < col) posrow[num]--, poscol[num]++;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						posrow[num]++, poscol[num]--;
						break;
					}
				}
			}
			
			else if(direction == "NW"){
				if(posrow[num]-1 >= 0 && poscol[num]-1 >= 0) posrow[num]--, poscol[num]--;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						posrow[num]++, poscol[num]++;
						break;
					}
				}
			}
			else if(direction == "SE"){
				if(posrow[num]+1 < row && poscol[num]+1 < col) posrow[num]++, poscol[num]++;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						posrow[num]--, poscol[num]--;
						break;
					}
				}
			}
			
			else if(direction == "SW"){
				if(posrow[num]+1 < row && poscol[num]-1 >= 0) posrow[num]++, poscol[num]--;
				for(int i = 1 ; i <= turtle ; i++){
					if(posrow[num] == posrow[i] && poscol[num] == poscol[i] && num != i){
						posrow[num]--, poscol[num]++;
						break;
					}
				}
			}
		}
		
		
		int finish[row];
		for(int i = 0 ; i < row ; i++) finish[i] = col-1; 
		
		for(int t = 1 ; t <= turtle ; t++){
			if(posrow[t] >= 0 && poscol[t] >= 0){
				int i = posrow[t];
				int j = poscol[t];
				map[i][j] = 1;
			}
		}
		
		for(int i = 0 ; i < row ; i++){
			for(int j  = col-1 ; j >= 0 && map[i][j] == 0 ; j--){
				finish[i] = j-1;
			}
		}
		
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j <= finish[i] ; j++){
				if(finish[i] != col-1 && j != finish[i]){
					if(map[i][j] == 1) cout << "*";
					else cout << " "; 
				}
				else{
					if(map[i][j] == 1) cout << "*";
					else cout << " "; 
				}
				
			}
			cout << endl; 
		}
		cout << endl;
	}
}

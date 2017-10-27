#include<iostream>
using namespace std;

int roc, coc, x, y, counter, lop, pos = 1, location[20][20], flag[20][20];
string a;
int main(){
	while(cin >> roc >> coc >> y){
		if(roc == 0 && coc == 0 && y == 0) break;
		int count = 0;
		pos = 1;
		while(count < roc){
			cin >> a;
			for(int i = 0 ; i < coc ; i++){
				location[count][i] = a[i];
				flag[count][i] = 0;
			}
			count++;
		}
		
		x = 0;
		counter = 0;
		lop = 0;
		y--;
		while(y < coc && y >= 0 && x >= 0 && x < roc){
			counter++;
			if(flag[x][y] != 0){
				pos = 0;
				lop = counter - flag[x][y];
				counter = flag[x][y];
				break;
			}
			
			flag[x][y] = counter;
			if(location[x][y] == 'N')x--;
			
			else if(location[x][y] == 'E')y++;
			
			else if(location[x][y] == 'S')x++;
		
			else if(location[x][y] == 'W')y--;
			
			else break;
			
		}
		if(pos) cout << counter << " step(s) to exit"<< endl;
		else cout << --counter << " step(s) before a loop of " << lop << " step(s)" << endl;
		for(int a = 0 ; a < 20 ; a++){
			for(int b = 0 ; b < 20 ; b++){
				flag[a][b] = 0;
				location[a][b] = 0;
			}
		}
	}
}


#include<iostream>
using namespace std;

int main(){
	int w, h, l;
	while(cin >> w >> h >> l){
		if(w == 0 && h == 0 && l == 0) break;
		int map[h][w], counter = 0;
		
		for(int i = 0 ; i < w ; i++){
			for(int j = 0 ; j < h ; j++){
				map[j][i] = 0;
			}
		}
		int x1, y1, x2, y2;
		while(l > 0){
			cin >> x1 >> y1 >> x2 >> y2;
			
			if(x1 < x2){
				int temp = x1;
				x1 = x2;
				x2 = temp;
			}
			int a = x1 - x2;
			
			if(y1 < y2){
				int temp = y1;
				y1 = y2;
				y2 = temp;
			}
			int b = y1 - y2;
			
			for(int i = x2-1 ; i < x1 ; i++){
				for(int j = y2-1 ; j < y1 ; j++){
					if(map[j][i] == 0) map[j][i] = 1; 
				}
			}
			l--;	
		}
		
		for(int i = 0 ; i < w ; i++){
			for(int j = 0 ; j < h ; j++){
				if(map[j][i] == 0) counter++;
			}
		}
		if(counter == 0) cout << "There is no empty spots." << endl;
		else if (counter == 1) cout << "There is one empty spot." << endl;
		else cout << "There are " << counter << " empty spots." << endl;
	}
}

#include<iostream>
using namespace std;

int count_slide(int map, int len){
	
}
int count_rev_slide(int map, int len){
	
}

int main(){
	int r, c, p;
	cin >> p;
	while(p--){
		cin >> r >> c;
		if(r == 1 && c == 1){
			cout << "0" << endl;
			break;
		}
		int map[c], ans[2*r];
		for(int i = 0 ; i < 2*r ; i+=2){
			for(int j = 0 ; j < c ; j++)
				cin >> map[j];
			ans[i] = count_slide(*map,c);
			ans[i+1] = count_rev_slide(*map,c);
		}
		int max = 0;
		for(int i = 0 ; i < 2*r ; i++){
			if(ans[i] > max) max = ans[i];
		}
		cout << max << endl;
	}
}

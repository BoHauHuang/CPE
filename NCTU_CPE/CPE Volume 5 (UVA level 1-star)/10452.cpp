#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		while(n > 0){
			int l, ants;
			cin >> l >> ants;
			
			int pos[ants], ansb = 0;
			for(int i = 0 ; i < ants ; i++){
				cin >> pos[i];
				if(pos[i] > ansb) ansb = pos[i];
				if(l - pos[i] > ansb) ansb = l-pos[i];
			}
			int ansa = 0, half = l/2;
			for(int i = 0 ; i < ants ; i++){
				if(pos[i] > half) pos[i] = l - pos[i];
			}
			for(int k = 0 ; k < ants ; k++){
				if(ansa < pos[k]) ansa = pos[k];
			}
			
			
			
			cout << ansa << " " << ansb << endl;
			
			n--;
		}
	}
}

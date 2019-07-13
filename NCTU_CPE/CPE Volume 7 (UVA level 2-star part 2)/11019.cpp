#include<bits/stdc++.h>
using namespace std;

map<char, int> die;

void init(){
	die['T'] = 1;
	die['N'] = 2;
	die['W'] = 3;
	die['E'] = 4;
	die['S'] = 5;
	die['B'] = 6;
}

void rotate_N(){
	int tmp = die['T'];
	die['T'] = die['S'];
	die['S'] = die['B'];
	die['B'] = die['N'];
	die['N'] = tmp;
}

void rotate_E(){
	int tmp = die['E'];
	die['E'] = die['T'];
	die['T'] = die['W'];
	die['W'] = die['B'];
	die['B'] = tmp;
}

int main(){
	int q;
	while(cin >> q){
		if(!q) return 0;
		string cmd;
		init();
		while(q--){
			cin >> cmd;
			if(cmd == "north") rotate_N();
			else if(cmd == "east") rotate_E();
			else if(cmd == "south"){
				for(int i = 0 ; i < 3 ; i++){
					rotate_N();
				}
			}
			else if(cmd == "west"){
				for(int i = 0 ; i < 3 ; i++){
					rotate_E();
				}
			}
		}
		cout << die['T'] << endl;
	}
} 

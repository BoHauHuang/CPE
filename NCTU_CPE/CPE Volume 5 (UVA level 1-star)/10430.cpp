#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	int list[26] = {0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	int last;
	while(cin >> input){
		int len = input.length();
		int a = (int)input[0] - 65;
		if(list[a] != 0) cout << list[a];
		last = list[a];
		
		for(int i = 1 ; i < len ; i++){
			int a = (int)input[i] - 65;
			if(list[a] != last && list[a] != 0){
				last = list[a];
				cout << list[a];
			}
			if(list[a] == last && list[a] != 0) last = list[a];
			else last = 0;
		}
		cout << endl;
	}
}

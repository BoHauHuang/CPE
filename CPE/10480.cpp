#include<iostream>
using namespace std;

int main(){
	int flag[100001];
	for(int z = 0 ; z < 100001 ; z++){
		flag[z] = 0;
	}
	for(int i = 1 ; i < 317 ; i++){
		flag[i*i] = 1;
	}
		
	
	int a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		int counter = 0;
		for(int k = a ; k <= b ; k++)
			if(flag[k] == 1) {
				counter++;
			}
		cout << counter << endl;
	}
}

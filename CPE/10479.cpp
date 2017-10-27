#include<iostream>
using namespace std;

int main(){
	int x[10001], y[10001], flag[10001];
	for(int i = 2 ; i <= 59 ; i++){
		for(int j = 1 ; j < i ; j++){
			if(i*i*i - j*j*j <= 10000 && flag[i*i*i - j*j*j] == 0){
				flag[i*i*i - j*j*j] = 1;
				x[i*i*i - j*j*j] = i;
				y[i*i*i - j*j*j] = j;
			}
		}
	}
	int input;
	while(cin >> input){
		if(input == 0) break;
		if(flag[input] == 1)
			cout << x[input] << " " << y[input] << endl;
		else cout << "No solution" << endl;
	}
	
}

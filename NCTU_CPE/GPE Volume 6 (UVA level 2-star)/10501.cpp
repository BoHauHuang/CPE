#include<iostream>
using namespace std;

int main(){
	int cat[12];
	for(int i = 0 ; i < 12 ; i++)
		cat[i] = 1;
	for(int i = 1 ; i < 12 ; i ++)
		cat[i] = cat[i-1]*2*(2*i-1)/(i+1);
		
	int input, count = 0;
	while(cin >> input){
		if(count) cout << endl;
		cout << cat[input] << endl;
		count++;
	}
}

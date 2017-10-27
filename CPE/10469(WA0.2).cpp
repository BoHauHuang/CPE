#include<iostream>
#define TOTAL 9900
using namespace std;

int sum[TOTAL];

int main(){
	int n, counter = 1;
	while(cin >> n){
		int num[n], nc = 0;
		bool b = true;
		
		for(int z = 0 ; z < TOTAL ; z++)
			sum[z] = 0;
		
		while(n > 0){
			cin >> num[nc];
			nc++;
			n--;
		}
		
		int sc = 0;
		for(int i = 0 ; i < nc ; i++){
			for(int j = i+1 ; j < nc ; j++){
				sum[sc] = num[i]+num[j];
				sc++;
			}
		}
		for(int k = 0 ; k < sc ; k++){
			for(int m = k+1 ; m < sc ; m++){
				if(sum[k] == sum[m]){
					b = false;
					break;
				}
			}
		}
		
		if(b) cout << "Case #" << counter << ": It is a B2-Sequence." << endl << endl;
		if(!b) cout << "Case #" << counter << ": It is not a B2-Sequence." << endl << endl;
		counter++;
	}
}

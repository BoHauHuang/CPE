#include<iostream>

using namespace std;

int total, number;

int main(){
	while(!cin.eof()){
		cin >> total;
		while(total != 0){
			cin >> number;
			int square[number], animals[number], ef[number], sum[total];
			int a = 0;
			total--;
			sum[a] = 0;
			for(int i = 0 ; i < number ; i++){
				cin >> square[i] >> animals[i] >> ef[i];	
			}
			for(int j = 0 ; j < number ; j++){
				sum[a] += square[j]*ef[j];
			}
			cout << sum[a] << endl;
			a++;
		}
		if(total <= 0) break;
	}
}

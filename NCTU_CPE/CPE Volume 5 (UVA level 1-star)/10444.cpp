#include<iostream>
using namespace std;

int main(){
	int docs, tests, counter = 1;
	while(cin >> docs >> tests){
		if(docs == 0 && tests == 0) break;
		
		int num[docs], test[tests];
		
		for(int i = 0 ; i < docs ; i++)
			cin >> num[i];
		for(int i = 0 ; i < tests ; i++)
			cin >> test[i];
		
		for(int i = 0 ; i < docs ; i++){
			for(int j = i ; j < docs ; j++){
				if(num[i] > num[j]){
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		
		cout << "CASE# " << counter << ":" << endl;
		
		for(int a = 0 ; a < tests ; a++){
			bool flag = false;
			for(int k = 0 ; k < docs ; k++){
				if(test[a] == num[k]){
					cout << test[a] << " found at " << k+1 << endl;
					flag = true;
					break;
				}
			}
			if(!flag) cout << test[a] << " not found" << endl;
		}
		counter++;
	}
}

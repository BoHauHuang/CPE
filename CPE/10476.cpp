#include<iostream>
#include<string>
using namespace std;

int main(){
	int count;
	while(cin >> count){
		while(count > 0){
			string num;
			cin >> num;
			int len = num.length();
			
			int counter;
			cin >> counter;
			int x;
			
			bool flag = false;
			int sum = 0;
			
			for(int j = 0 ; j < counter ; j++){
				cin >> x;
				for(int k = 0 ; k < len ; k++){
					sum = sum*10 + num[k] - '0';
					sum %= x;
				}
				if(sum != 0) flag = true;
			}
			
			if(flag) cout << num << " - Simple." << endl;
			else cout << num << " - Wonderful." << endl;
			
			count--;
		}
	}
}

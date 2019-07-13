#include<iostream>
using namespace std;

int main(){
	bool pos;
	string input;
	int num[6];
	while(cin >> input){
		pos = true;
		int n = 1, sup, total = 0;
		if(input == "0")break;
		int len = input.size();
		for(int counter = 0 ; counter < len ; counter++){
			total += (int)input[counter]-48;
		}
		if(total%9 != 0) pos = false;
		else pos = true;
		
		while(total > 9){
			n++;
			sup = total;
			total = 0;
			int a = 0;
			while(sup > 0){
				a++;
				num[a] = sup%10;
				sup = sup/10;
			}
			for(int i = 1 ; i <= a ; i++){
				total += num[i];
			}
		}
		
		if(pos) cout << input << " is a multiple of 9 and has 9-degree " << n << "." << endl;
		else cout << input << " is not a multiple of 9." << endl;
	}
	
	return 0;
}

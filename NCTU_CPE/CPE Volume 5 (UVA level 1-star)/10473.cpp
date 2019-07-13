#include<iostream>
#include<sstream>
using namespace std;

int num[11], sup, a;

int main(){
	string input;
	while(getline(cin,input)){
		int total = 0;
		
		if(input == "0")break;
		
		stringstream str(input);
		int len = input.size();
		
		for(int counter = 0 ; counter < len; counter ++){
			total += (int)input[counter] - 48;
		}
		while(total > 9){
			sup = total;
			total = 0;
			int a = 0; 
			while(sup > 0){
				num[a] = sup%10;
				sup = sup/10;
				a++;
			}
			for(int i = 0 ; i <= a ; i++){
				total += num[i];
			}
		}
		cout << total << endl;
	}
	return 0;
}

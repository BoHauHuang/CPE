#include<iostream>

unsigned int input, counter, a, total[47];
 
using namespace std;

int main(){
	a = 0; 
	total[0] = 0;
	total[1] = 1;
	for(counter = 2 ; counter <= 47 ; counter++){
		total[counter] = total[counter-1] + total[counter-2];
	}
	while(!cin.eof()){
		cin >> input;
		a++;

		if(0 <= input && input <= 47){
			cout << "case " << a << ":" << endl;
			cout << total[input] << endl;
			cout << endl;
		}
		else{
			cout << "case " << a << ":" << endl;
			cout << "overflow" << endl;
			cout << endl;
		}
	}
	return 0;
}

#include<iostream>

int a, b;
int counter, gcd, num, maximum;
using namespace std;

int main(){
	while(!cin.eof()){
		cin >> a;
		cin >> b;
		num++;
		if(a > b){
			maximum = a; 
			for(counter = 1 ; counter <= maximum ; counter++){
			if(a%counter==0 && b%counter==0) gcd = counter;
			}
		}
		else if(b > a){
			maximum = b;
			for(counter = 1 ; counter <= maximum ; counter++){
			if(a%counter==0 && b%counter==0) gcd = counter;
			}
		}
		else if(a == 0 && b == 0){
			gcd = 0;
		}
		else{
			gcd = a;
		}
		
		
		cout << "case " << num << ":" << endl;
		cout << gcd << endl << endl;
	}
	return 0;
}

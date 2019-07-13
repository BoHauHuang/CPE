#include<bits/stdc++.h>
using namespace std;
struct BIG{
	unsigned long long int digit_low;
	unsigned long long int digit_high;
};

int main(){
	int n;
	BIG step[101];
	for(int i = 0 ; i <= 100 ; i++){
		step[i].digit_high = 0;
		step[i].digit_low = 0;
	}
	step[0].digit_low = 1;
	step[1].digit_low = 1;
	
	for(int i = 2 ; i <= 100 ; i++){
		step[i].digit_high += (step[i-1].digit_high);
		step[i].digit_low += (step[i-1].digit_low);
		step[i].digit_high += (step[i-2].digit_high);
		step[i].digit_low += (step[i-2].digit_low);
		
		step[i].digit_high+= (step[i].digit_low/(1000000000000000));
		step[i].digit_low%=(1000000000000000);
	}
	
	while(cin >> n){
		if(step[n].digit_high) cout << step[n].digit_high;
		cout << step[n].digit_low << endl;
	}
	
	return 0;
}

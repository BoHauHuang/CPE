#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long input;
	while(cin >> input){
		if(input == 0) break;
		
		long long ans = sqrt(input);
		bool flag = false;
		
		if(ans*ans == input) flag = true;
		
		if(flag) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

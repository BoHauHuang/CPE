#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, case_count = 1;
	cin >> n;
	while(n--){
		int num;
		cin >> num;
		cout << "Case #" << case_count << ": ";
		case_count++;
		int total = num;
		if(total < 10) total *= num;
		
		while(total >= 10){
			int sum = 0;
			while(total > 0){
				int digit = total%10;
				total /= 10;
				sum += (digit*digit);
			}
			total = sum;
		}
		if(total == 1) cout << num << " is a Happy number." << endl;
		else cout << num << " is an Unhappy number." << endl;
	}
	return 0;
}

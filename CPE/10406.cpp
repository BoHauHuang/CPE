#include<iostream>
using namespace std;

int count, cas, counter, test, mid;
long long sum;

int main(){
	cin >> count;
	while(count > 0){
		--count;
		sum = 0;
		cin >> cas;
		int str[cas+1];
		for(int i = 1 ; i <= cas ; i++){
			cin >> str[i];
		} 
		for(counter = 1 ; counter <= cas ; counter++){
			for(test = 1 ; test <= cas ; test++){
				if(str[counter] < str[test]){
					int temp = str[counter];
					str[counter] = str[test];
					str[test] = temp;
				}
			}
		}
		if(cas%2 == 0) mid = str[cas/2];
		else {
			int a = cas+1;
			mid = str[a/2];
		}
		for(int j = 1 ; j <= cas ; j++){
			int dis = str[j] - mid;
			if (dis > 0) sum += dis;
			else sum += -dis;
		}
		cout << sum << endl; 
	}
}

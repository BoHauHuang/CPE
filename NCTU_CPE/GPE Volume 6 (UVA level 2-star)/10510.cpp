#include<iostream>
#define NUM 1000001
using namespace std;
int a[NUM], b[NUM];
int main(){
	int total, count = 0;
	while(cin >> total){
		int m;
		while(total--){
			cin >> m;
			if(count > 0) cout << endl;
			count++;
			int counter = 0;
			while(m--){
				cin >> a[counter] >> b[counter];
				counter++;
			}
			int sum[counter+1], carry = 0;
			sum[counter] = 0;
			for(int i = counter-1 ; i >= 0 ; i--){
				if(a[i]+b[i]+carry < 10){
					sum[i] = a[i] + b[i] + carry;
					carry = 0;
				}
				else if(a[i]+b[i]+carry >= 10){
					sum[i] = a[i] + b[i] + carry - 10;
					carry = 1;
				}
			}
			if(carry){
				cout << "1";
				for(int i = 0 ; i < counter ; i++)
					cout << sum[i];
					
				cout << endl; 
			}
			else{
				for(int i = 0 ; i < counter ; i++)
					cout << sum[i];
					
				cout << endl; 
			}
			
		}
	}
}

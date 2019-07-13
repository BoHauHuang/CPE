#include<iostream>
using namespace std;

int main(){
	long long a[11], b[11], x, y;
	while(cin >> x >> y){
		if(x == 0 && y == 0)break;
		
		for(int k = 0 ; k < 11 ; k++){
			a[k] = 0;
			b[k] = 0;
		}
		
		int i = 0 , j = 0, counter = 0;
		
		while(x > 0){
			a[i] = x % 10;
			x /= 10;
			i++;
		}
		
		while(y > 0){
			b[j] = y % 10;
			y /= 10;
			j++;
		}
		
		if(i > j){
			for(int n = 0 ; n < i ; n++){
				if(a[n] + b[n] >= 10){
					counter++;
					a[n+1]++;
				}
			}
		}
		else if(i < j){
			for(int n = 0 ; n < j ; n++){
				if(a[n] + b[n] >= 10){
					counter++;
					b[n+1]++;
				}
			}
		}
		else{
			for(int n = 0 ; n < i ; n++){
				if(a[n] + b[n] >= 10){
					counter++;
					a[n+1]++;
				}
			}
		}
		
		
		if(!counter) cout << "No carry operation." << endl;
		else if(counter == 1) cout << counter << " carry operation." << endl;
		else cout << counter << " carry operations." << endl;
		
	}
}

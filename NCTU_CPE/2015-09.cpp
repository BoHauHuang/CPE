#include<iostream>
using namespace std;

int main(){
	int len;
	while(cin >> len){
		int a[len], count = 0;
		while(count < len){
			cin >> a[count];
			count++;
		}
		int lis[len];
		for(int i = 0 ; i < len ; i++){
			lis[i] = 1;
			for(int j = 0 ; j < i ; j++){
				if(a[j] <= a[i] && lis[j] == lis[i] && i != j) lis[i]++;
			}
		}
		
		int max = 0;
		for(int i = 0 ; i < len ; i++)
			if(lis[i] > max) max = lis[i];
			
		cout << max << endl;
	}
}

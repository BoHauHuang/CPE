#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int num[n], count = 0, mid;
		while(count < n){
			cin >> num[count];	
			count++;
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				if(num[i] < num[j]){
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		
		int dif, difc = 1;
		if(n % 2)
			mid = num[(n-1)/2];
		else{
			int a = n/2;
			mid = num[a-1];
			dif = num[a];
			if(mid < dif)difc = dif - mid + 1;
		}
		
		int counter = 0, summ = 0, sumf = 0;
		
		for(int k = 0 ; k < n ; k++){
			if(dif - num[k] > 0) sumf += dif - num[k];
			else sumf += num[k] - dif;
			
			if(mid - num[k] > 0) summ += mid - num[k];
			else summ += num[k] - mid;
			
			if(num[k] == mid) counter++;
		}
		
		if(sumf == summ && dif != mid){
			for(int p = 0 ; p < n ; p++)
				if(num[p] == dif) counter++;
		}
		

		cout << mid << " " << counter << " " << difc << endl;
	}
}

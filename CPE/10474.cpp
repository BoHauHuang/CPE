#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
		int num;
		while(n > 0){
			cin >> num;
			int three[3];
			
			for(int i = 0 ; i < 3 ; i++)
				three[i] = 0;
				
			bool flag = false;
			int dic = num;
			
			for(int i = 0 ; i*i <= num ; i++){
				for(int j = 0 ; j*j <= num ; j++){
					for(int k = 0 ; k*k <= num ; k++){
						if(i*i+j*j+k*k == num && i+j+k < dic){
							three[0] = i;
							three[1] = j;
							three[2] = k;
							dic = i+j+k;
							flag = true;
						}
					}
				}
			}
			
			for(int i = 0 ; i < 3 ; i++){
				for(int j = i ; j < 3 ; j++){
					if(three[i] > three[j]){
						int temp = three[i];
						three[i] = three[j];
						three[j] = temp;
					}
				}
			}
			
			if(num == 1) cout << "0 0 1" << endl;
			else if(num == 2) cout << "0 1 1" << endl;
			else if (num == 3) cout << "1 1 1" << endl;
		
			if(!flag && num > 3)
				cout << "-1" << endl;
			if(flag)
				cout << three[0] << " " << three[1] << " " << three[2] << endl; 
		
			n--;
		}
} 

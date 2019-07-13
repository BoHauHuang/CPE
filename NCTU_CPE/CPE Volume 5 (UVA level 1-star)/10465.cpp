#include<iostream>
using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		
		int max = 0, sol, count = 0, ans;
		
		for(int i = 1 ; a > b*i ; i++){
			sol = (a-b*i)*i;
			
			if(sol > max){
				max = sol;
				count = 1;
				ans = i;
			}
			else if(sol == max) count++;
			
		}
		
		if(count > 1) cout << "0" << endl;
		else cout << ans << endl;
	}	
}

#include<bits/stdc++.h>
#define ANS_LEN 550
using namespace std;
	
int main(){
	string in;
	while(cin >> in){
		bool a_zero = (in=="0");
		
		int alen = in.size();
		int a[alen];
		memset(a, 0, sizeof(a));
		for(int i = 0 ; i < alen ; i++)
			a[i] = in[alen-i-1]-'0';
			
		cin >> in;
		bool b_zero = (in=="0");
		int blen = in.size();
		int b[blen];
		memset(b, 0, sizeof(b));
		for(int i = 0 ; i < blen ; i++)
			b[i] = in[blen-i-1]-'0';
		
		if(a_zero || b_zero) cout << "0" << endl;
		else{
			int ans[ANS_LEN];
			memset(ans, 0, sizeof(ans));
			for(int i = 0 ; i < alen ; i++){
				for(int j = 0 ; j < blen ; j++){
					ans[i+j] += (a[i]*b[j]);
				}
			}
			
			for(int i = 0 ; i < ANS_LEN ; i++){
				if(ans[i]/10){
					ans[i+1] += ans[i]/10;
					ans[i] %= 10;
				}
			}
			bool start = false;
			for(int i = ANS_LEN-1 ; i >= 0 ; i--){
				if(ans[i] && !start) start = true;
				if(start) cout << ans[i];
			}
			cout << endl;
		}
		
	}
	return 0;
}

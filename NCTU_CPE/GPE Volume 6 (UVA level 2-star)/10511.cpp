#include<bits/stdc++.h>
using namespace std;

int main(){
	double t, n, cnt = 0, a_0, a_last, in;
	cin >> t;
	while(t--){
		cin >> n;
		double sub = 0.0;
		
		cin >> a_0 >> a_last;
		for(double i = 1 ; i <= n ; i++){
			cin >> in;
			sub += (in*(n+1-i));
		}

		if(cnt) printf("\n");
		cnt++;
		printf("%.2f\n", (a_0*n+a_last-sub*2.0)/(n+1.0));
	}
	
	return 0;
}

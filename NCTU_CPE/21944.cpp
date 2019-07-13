#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(!N) break;
		else{
			int a[N+1], i = 1;
			bool find = false;
			while(!find){
				memset(a, 0, sizeof(a));
				a[0] = 1;
				a[1] = 1;
				int cnt = 0, dead = 1;
				
				for(int j = 1 ; j <= N ; ){
					if(dead == N-1) break;
					if(cnt < i && !a[j]) cnt++;
					if(cnt == i && !a[j]){
						dead++;
						a[j] = 1;
						cnt = 0;
					}
					
					j = (j+1)%(N+1);
				}
				int live = 0;
				for(int j = 1 ; j <= N ; j++)
					if(!a[j]) live = j;
				
				if(live == 13){
					cout << i << endl;
					find = true;
					break;
				}
				i++;
			}
		}
	}
}

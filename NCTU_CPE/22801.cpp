#include<bits/stdc++.h>
using namespace std;
int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(){
	int n, m, d;
	cin >> n;
	
	while(n--){
		cin >> m >> d;
		int sum = 0;
		for(int i = 1 ; i < m ; i++)
			sum += day[i];
		sum += d;
		
		if(sum < 94) cout << (((94-sum)%7)? week[7-(94-sum)%7] : week[(94-sum)%7])<< endl;
		else cout << week[(sum-94)%7] << endl;
	}
	
	return 0;
}

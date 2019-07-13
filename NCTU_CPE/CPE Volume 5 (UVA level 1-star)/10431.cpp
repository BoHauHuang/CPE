#include<iostream>
#include<math.h>
#define NUM 99999
using namespace std;

int main(){
	int x;
	while(cin >> x){
		int a[NUM], count = 0;
		while(cin >> a[count]){
			if(cin.get() == '\n')break;
			count++;
		}
		int ans = 0;
		for(int i = 0 ; i < count ; i++){
			ans += a[i]*(count-i)*pow(x,count-i-1);
		}
		cout << ans << endl;
	}
}

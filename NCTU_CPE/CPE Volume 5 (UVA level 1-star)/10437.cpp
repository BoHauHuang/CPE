#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int n , counter = 1;
	while(cin >> s){
		cout << "Case " << counter << ":" << endl;
		cin >> n;
		while(n > 0){
			int i, j, end;
			cin >> i >> j;
			if(i > j){
				int temp = i;
				i = j;
				j = temp;
			}
			int start = s[i];
			bool flag = true;
			for(int k = i ; k <= j ; k++){
				if(s[k] != start){
					flag = false;
					break;
				}			
			}
			
			if(flag) cout << "Yes" << endl;
			else cout << "No" << endl;
			
			n--;
		}
		counter++;
	}
}

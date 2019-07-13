#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(!n) break;
		while(n--){
			string a, b;
			cin >> a >> b;
			int lena = a.length(), lenb = b.length();
			bool flag = true;
			if(lena != lenb) flag = false;
			
			if(flag){
				for(int i = 0 ; i < lena ; i++){
					if(a[i] != b[i]){
						if((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')) flag = true;
						else{
							flag = false;
							break;
						}
					}
				}
			}
			
			if(!flag) cout << "No" << endl;
			else cout << "Yes" << endl;
		}
	}
}

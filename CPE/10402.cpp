#include<iostream>
#include<string>

using namespace std;

int count[256], total;
string s;
int main(){
		cin >> total;
		int counter = 0;
		while(total >= 0){
			total--;
			getline(cin, s);
			int len = s.length();
			
			for(int i = 0 ; i < len ; i++){
				if(s[i] <= 'z' && s[i] >= 'a'){
					counter++;
					int position = (int)s[i] - 32;
					count[position]++;
				} 
				if(s[i] <= 'Z' && s[i] >= 'A'){
					counter++;
					int position = (int)s[i];
					count[position]++;
				}
		 	}
		}
		
		if(total == -1){
			for(int k = counter ; k > 0 ; k--){
				for(int j = 'A' ; j <= 'Z' ; j++){
					if(count[j] == k) cout << (char)j << " " << count[j] << endl;
				}
			}
		}
	}


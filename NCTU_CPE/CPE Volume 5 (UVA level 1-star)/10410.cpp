#include<iostream>
#include<string>
using namespace std;

int main(){
	string word;
	int space = 0;
	while(getline(cin, word)){
		if(space > 0) cout << endl;
		space++;
		
		int len = word.length();
		int ascii[129], maximum = 1, counter = 1;
		for(int z = 0 ; z < 129 ; z++) ascii[z] = 0;
		
		for(int i = 0 ; i < len ; i++){
			if(word[i] >= 32 && word[i] <= 128){
				int a = (int)word[i];
				ascii[a]++;
			}
		}
		
		for(int j = 0 ; j < 129 ; j++){
			if(ascii[j] > maximum && ascii[j] > 0) maximum = ascii[j];
		}
		
		while(counter <= maximum){
			for(int k = 128 ; k >= 0 ; k--){
				if(ascii[k] == counter){
					cout << k << " " << counter << endl;
				}
			}
			counter++;
		}
	}
}

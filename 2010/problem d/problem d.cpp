#include<iostream>
#include<map>
#include<string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	string word;
	int num;
	cin >> num;
	map<string, int> list;
	map<string, int>::iterator it;
	while(cin >> word){
		if(word == "EndOfText") break;
		int len = word.length();
		for(int i = 0 ; i < len ; i++){
			if(word[i] >= 'A' && word[i] <= 'Z') word[i] = word[i]-'A'+'a';
			else if (word[i] >= 'a' && word[i] <= 'z') word[i] = word[i];
			else word.erase(i,1);
		}
		++list[word];
	}
	bool none = true;
	for(it = list.begin(); it!=list.end();it++){
		if(it->second == num) cout << it->first << endl, none = false;
	}
	if(none) cout << "There is no such word."<<endl;
	return 0;
}

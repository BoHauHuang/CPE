#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b, in;
	map<string, string> dict;
	map<string, string>::iterator it;
	
	while(getline(cin, in)){
		if(in == "") break;
		stringstream ss(in);
		ss >> a >> b;
		dict[b] = a;
	}
	
	while(cin >> a){
		it = dict.find(a);
		
		if(it != dict.end()) cout << dict[a] << '\n';
		else cout << "eh" << '\n';
	}
	
	return 0;
} 

#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
	int n, b = 0;
	string name;
	while(cin >> n){
		
		getchar();
		getchar();
		
		while(n--){
			if(b > 0) cout << endl;
			map<string, int>trees;
			map<string, int>::iterator iter;
			int total = 0;
			while(getline(cin, name) && name != ""){
				trees[name]++;
				total++;
			}
			for(iter = trees.begin() ; iter != trees.end() ; iter++){
				cout << iter->first;
				printf(" %.4lf\n",(double)iter->second / total * 100.0);
			}
			b++;
		}
	}
}

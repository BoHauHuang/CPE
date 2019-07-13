#include<iostream>
#include<string>
using namespace std;
int main(){
	int n, counter = 1;
	while(cin >> n){
		if(n == 0) break;
		cout << "Case " << counter << ":" << endl;
		cout << "#include<string.h>" << endl;
		cout << "#include<stdio.h>" << endl;
		cout << "int main()" << endl;
		cout << "{" << endl;
		while (n > 0){
			string s;
			getline(cin, s);
			int len = s.length();
			if(len > 0){
				cout << "printf(\"";
			for(int i = 0 ; i < len ; i++){
				if(s[i] == 34) cout << "\\\"";
				else if (s[i] == 92) cout << "\\\\";
				else cout << s[i];
			}
			cout << "\\n\");" << endl;
			n--;
			}
			
			
			
		}
		cout << "printf(";
		cout << "\"\\n\");" << endl; 
		cout << "return 0;" << endl;
		cout << "}" << endl;
		counter++;
	}
}

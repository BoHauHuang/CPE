#include<iostream>
using namespace std;

int main(){
	long long s, d;
	while(cin >> s >> d){
		 long long sum = 0;
		for(int i = 0 ; ; i++){
			sum = (s+s+i)*(i+1)/2;
			if(sum >= d){
				cout << s+i << endl;
				break;
			}
		}
	}
}

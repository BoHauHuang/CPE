#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		while(n > 0){
			float players, p, i;
			cin >> players >> p >> i;
			
			float q = 1 - p;
			printf("%.4f\n",p*pow(q,i-1)/(1-pow(q, players)));
			
			n--;
		}
	}
	
}

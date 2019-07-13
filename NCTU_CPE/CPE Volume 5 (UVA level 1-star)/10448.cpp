#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
	double pi = 2*acos(0);
	int n;
	while(cin >> n){
		while(n--){
			double a, b, c;
			double d, l;
			cin >> d >> l;
			c = d/2;
			a = l/2;
			b = sqrt(a*a-c*c);
			printf("%.3lf\n", pi*a*b);
		}
	}
}

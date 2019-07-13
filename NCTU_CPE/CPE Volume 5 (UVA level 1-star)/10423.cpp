#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	double l, w;
	while(cin >> l >> w){
		double x2;
		if(l < w) x2 = l/2.0;
		else x2 = w/2.0;
		double vol = (l+w-sqrt(l*l-l*w+w*w))/6.0;
		
		printf("%.3lf 0.000 %.3lf\n", vol, x2);
	}
}

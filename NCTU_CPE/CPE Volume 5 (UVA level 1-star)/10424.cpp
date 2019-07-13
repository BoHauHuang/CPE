#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	char uni[3];
	double s, a;
	const double pi = acos(-1);
	while(cin >> s){
		cin >> a;
		for(int i = 0 ; i < 3 ; i++)
			cin >> uni[i];
			
		if(uni[0] == 'd'){
			int distance = s + 6440;
			double chord =  pow(2*pow(distance,2)*(1-cos(a*pi/180)), 0.5);
			double arc = a*distance*2*pi/360;
			printf("%.6lf %.6lf\n", arc, chord);
		}
		if(uni[0] == 'm'){
			a /= 60;
			int distance = s + 6440;
			double chord =  pow(2*pow(distance,2)*(1-cos(a*pi/180)), 0.5);
			double arc = a*distance*2*pi/360;
			printf("%.6lf %.6lf\n", arc, chord);
		}
	}
}

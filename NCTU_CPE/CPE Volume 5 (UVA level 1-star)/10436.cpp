#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int hole;
	while(cin >> hole){
		float ax, ay, bx, by, hx, hy;
		cin >> ax >> ay >> bx >> by;
		bool flag;
		while(hole--){
			flag = false;
			cin >> hx >> hy;
			float disax, disay, disbx, disby;
			disax = hx - ax;
			disay = hy - ay;
			disbx = hx - bx;
			disby = hy - by;
			
			if(disax < 0) disax = -disax;
			if(disbx < 0) disbx = -disbx;
			if(disay < 0) disay = -disay;
			if(disby < 0) disby = -disby;
			
			if(disax*2.0 < disbx){
				flag = true;
				printf("The gopher can escape through the hole at (%.3f,%.3f).\n", hx, hy);
			}
		}
		if(!flag) printf("The gopher cannot escape.\n");
		
	}
}

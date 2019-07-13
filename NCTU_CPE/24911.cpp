#include<iostream>
#include <cstring>
#include <sstream>
using namespace std;

int total, counter, lim, num, pos = 0;

int main(){
	cin >> total;
	while(total != 0){
		string act, sub;
		cin >> lim;
		
		int motion[lim+1];
		
		for(counter = 0 ; counter < lim ; counter++){
			cin >> act;
			if(act == "LEFT"){
				pos--;
				motion[counter+1] = -1;
			}
			else if(act == "RIGHT"){
				pos++;
				motion[counter+1] = 1;
			}
			else if(act == "SAME"){
				cin >> sub >> num;
				pos = pos + motion[num];
				motion[counter+1] = motion[num];
			}
		}
		cout << pos << endl;
		pos = 0;
		total--;
	}
	return 0;
} 

#include<iostream>
using namespace std;

long long total[47], year;

int main(){
	while(cin >> year){
		if(year == -1)break;
		total[0] = 1;
		total[1] = 2;
		
		for(int counter = 2 ; counter <= 46 ; counter++){
			total[counter] = total[counter-1] + total[counter-2] + 1;
		}
		
		cout << total[year-1] << " " <<  total[year] << endl;
	}
} 

#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(!n) break;
		while(n--){
			int days;
			cin >> days;
			int date[days+1];
			for(int i = 0 ; i < days+1 ; i++)
				date[i] = 0;
			
			int count;
			cin >> count;
			int party[count];
			for(int i = 0 ; i < count ; i++)
				cin >> party[i];
		
			while(count > 0){
				count--;
				for(int i = 1 ; i < days+1 ; i++){
					if(i%party[count] == 0 && i%7 != 6 && i%7 != 0) date[i] = 1;
				}
			}
			int total = 0;
			for(int i = 1 ; i < days+1 ; i++)
				if(date[i] == 1) total++;
			cout << total << endl;
		}
	}
}

#include<iostream>
#include<sstream>
using namespace std;

long long int n,counter, m, num[3001], dif, com[3000], total, k,p;
bool pos;

int main(){
	string input;
	while(getline(cin,input)){
		stringstream str(input);
		n = 0;
		pos = true;
		while(str >> num[n]) n++;
		while(num[0]!=0){
			for(counter = 0 ; counter < n-1 ; counter++){
				com[counter] = counter;
			}
			for(m = 1 ; m < n-1 ; m++){
				dif = num[m+1] - num[m];
				if(dif < 0){
					p = 0 - dif;
					com[p] = com[p]-p;
				}
				else if(dif == 0){
					pos = false;
				}
				else{
					p = dif;
					com[p] = com[p]-p;
				}
			}
			for(k = 0 ; k < n-1 ; k++){
				if(com[k] != 0) pos = false;
			}
			
			if(pos){
				cout << "Jolly" << endl;
				break;
			}
			else{
				cout << "Not jolly" << endl;
				break;
			}
		}	
		num[0]--;
	}
	return 0;
}


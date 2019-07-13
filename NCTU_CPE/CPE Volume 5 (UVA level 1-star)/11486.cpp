#include<iostream>
using namespace std;

int main(){
	int n, count = 1;
	cin >> n;
	while(n > 0){
		int s;
		cin >> s;
		int counter = 0, wall[s];
		while(counter < s){
			cin >> wall[counter];
			counter++;
		}
		cout << "Case " << count << ": ";
		int h = 0, l = 0;
		for(int i = 0 ; i < s-1 ; i++){
			if(wall[i] - wall[i+1] > 0) l++;
			else if(wall[i] - wall[i+1] < 0) h++;
		}
		cout << h << " " << l << endl;
		count++;
		n--;
	}
}

#include<iostream>
using namespace std;

int a, b, counter;

int main(){
	cin >> counter;
	int flag[counter], count = 0, total;
	total = counter;
	while(counter > 0){
		cin >> a >> b;
		
		if(a > b) flag[count] = 0;
		else if(a < b) flag[count] = 1;
		else flag[count] = 2;
		
		count++;
		counter--;		
	}
	for(int i = 0 ; i < total ; i++){
		if(flag[i] == 0) cout << ">" << endl;
		else if(flag[i] == 1) cout << "<" << endl;
		else cout << "=" << endl;
	}
}

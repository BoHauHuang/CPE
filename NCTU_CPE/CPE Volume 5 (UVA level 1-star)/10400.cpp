#include<iostream>

using namespace std;

unsigned long long int inputa, inputb, top, bot, lim, num, a, b, n = 1, maximum;

int main(){
	while(cin >> inputa >> inputb){
		if(inputa > inputb){
			top = inputa;
			bot = inputb;
		}
		else{
			top = inputb;
			bot = inputa;
		}
		maximum = 1;
		if(bot == 0) lim = 1;
		else lim = bot;
		for(num = lim ; num <= top ; num++){
			for(a = num ; a != 1;){
				if(a % 2 != 1){
					a = a/2;
					n++;
				}
				else{
					a = 3*a + 1;
					n++;
				}
			}
			if(n > maximum){
				maximum = n;
				n = 1;
			}
			else{
				n = 1;
			}
		}
		cout << inputa << " " << inputb << " " << maximum << endl;
	}
	return 0;
}

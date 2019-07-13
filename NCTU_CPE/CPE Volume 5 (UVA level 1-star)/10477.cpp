#include<iostream>
using namespace std;

int main(){
	int n, counter = 1;
	while(cin >> n){
		while(n--){
			int input;
			cin >> input;
			int x1[input], y1[input], x2[input], y2[input];
		
			for(int i = 0 ; i < input ; i++)
				cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
		
			int ldx = x1[0], ldy = y1[0], rtx = x2[0], rty = y2[0];
			bool flag = true;		 
		 
			for(int i = 1 ; i < input ; i++){
				if(x1[i] > ldx) ldx = x1[i];
				if(y1[i] > ldy) ldy = y1[i];
				if(x2[i] < rtx) rtx = x2[i];
				if(y2[i] < rty) rty = y2[i];
				
				if(ldx >= rtx || ldy >= rty) flag = false;
				else{
					x1[i] = ldx;
					y1[i] = ldy;
					x2[i] = rtx;
					y2[i] = rty;
				}
			}
			
			if(ldx >= rtx || ldy >= rty) flag = false;
			cout << "Case " << counter << ": ";
			if(flag) cout << (-rtx+ldx)*(-rty+ldy) << endl;
			else cout << "0" << endl;
			counter++;
		}
	}
}

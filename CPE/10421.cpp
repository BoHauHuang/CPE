#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
	int total, count = 1;
	cin >> total;
	while(count <= total){
		string a, b;
		long long numa = 0, numb = 0, border, top;
		
		cin >> a >> b;
		
		int lena = a.length();
		int lenb = b.length();
		
		for(int i = 0 ; i < lena ; i++){
			int k = (int)a[i] - 48;
			numa += k*pow(2,lena-i-1);
		}
		for(int j = 0 ; j < lenb ; j++){
			int t = (int)b[j] - 48;
			numb += t*pow(2,lenb-j-1);
		}
		
		if(numa < numb){
			border = numa;
			top = numb;
		}
		else{
			border = numb;
			top = numa;
		}
		
		while(top != 0){
			if(top < border){
				int temp = top;
				top = border;
				border = temp;
			}
			top %= border;
			if(top == 1)break;
		}
		
		if(!top) cout << "Pair #" << count << ": All you need is love!" << endl;
		if(top) cout << "Pair #" << count << ": Love is not all you need!" << endl;
		
		count++;
	}
}

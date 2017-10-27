#include<iostream>
using namespace std;

int main(){
	long long input, counter = 1;
	while(cin >> input){
		long long front = 0, back = 0;
		front = input / 1000000000;
		back = input % 1000000000;
		
		long long fs, fh, fl, fk;
		long long bn, bs, bh, bl, bk;
		fs = front % 10;
		fh = (front % 1000 - fs) / 10;
		fl = (front % 100000 - fh - fs) / 1000;
		fk = (front % 10000000 - fh - fs - fl) / 100000;
		
		bn = back % 100;
		bs = (back % 1000 - bn) / 100;
		bh = (back % 100000 - bs - bn) / 1000;
		bl = (back % 10000000 - bh - bs - bn) / 100000;
		bk = (back % 1000000000 - bl - bh - bs - bn) / 10000000;
		
		cout << counter << ".";
		if(fk != 0) cout << " " << fk << " kuti";
		if(fl != 0) cout << " " << fl << " lakh";
		if(fh != 0) cout << " " << fh << " hajar";
		if(fs != 0) cout << " " << fs << " shata";
		
		if(bk != 0) cout << " " << bk << " kuti";
		if(bl != 0) cout << " " << bl << " lakh";
		if(bh != 0) cout << " " << bh << " hajar";
		if(bs != 0) cout << " " << bs << " shata";
		if(bn != 0) cout << " " << bn;
		
		if(bn == 0 && bs == 0 && bh == 0 && bl == 0 && bk == 0) 
			if(fs != 0 || fh != 0 || fl != 0 || fk != 0) cout << " kuti";
		
		
		cout << endl;
		if(input == 0) cout << counter << ". 0" << endl; 
		counter++;
	}
}

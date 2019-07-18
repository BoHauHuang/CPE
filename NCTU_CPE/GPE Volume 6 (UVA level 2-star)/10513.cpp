#include<bits/stdc++.h>
using namespace std;
long long int N, cnt, num, rev, tmp;
vector<int> digit, rev_digit;

bool valid(){
	for(int i = 0, j = digit.size()-1 ; i < j ; i++, j--)
		if(digit[i] != digit[j]) return false;

	return true;
}

void rev_add(){
	tmp = num;
	digit.clear();
	rev = 0;
	
	while(tmp){
		digit.push_back(tmp%10);
		tmp/=10;
	}
	
	rev_digit = digit;
	reverse(rev_digit.begin(), rev_digit.end());

	for(int i = 0 ; i < rev_digit.size() ; i++)
		rev += (pow(10, i)*rev_digit[i]);
	
	num += rev;
	
	digit.clear();
	tmp = num;
	while(tmp){
		digit.push_back(tmp%10);
		tmp/=10;
	}
	
	cnt++;
}

int main(){
	cin >> N;
	
	while(N--){
		cin >> num;
		cnt = 0;
		
		tmp = num;
		digit.clear();
		while(tmp){
			digit.push_back(tmp%10);
			tmp/=10;
		}
		
		while(!valid()) rev_add();
		
		cout << cnt << " " << num << endl;
		
		digit.clear();
		rev_digit.clear();
	}
	
	return 0;
} 

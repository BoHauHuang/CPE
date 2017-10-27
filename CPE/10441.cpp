#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int suma, sumb;
string a, b;

int main(){
	while(getline(cin, a)){
		getline(cin, b);
		int lena = a.length();
		int lenb = b.length();
		suma = 0;
		sumb = 0;
		
		for(int i = 0 ; i < lena ; i++){
			if(97 <= (int)a[i] && (int)a[i] <= 122) suma += (int)a[i] - 96;
			else if(65 <= (int)a[i] && (int)a[i] <= 90) suma += (int)a[i] - 64;
			else suma = suma;
		}
		
		for(int j = 0 ; j < lenb ; j++){
			if('a' <= b[j] && b[j] <= 'z') sumb += (int)b[j] - 96;
			else if('A' <= b[j] && b[j] <= 'Z') sumb += (int)b[j] - 64;
			else sumb = sumb;
		}
		
		while(suma > 9){
			int tempa = suma / 10;
			suma %= 10;
			suma += tempa; 
		}
		while(sumb > 9){
			int tempb = sumb / 10;
			sumb %= 10;
			sumb += tempb;
		}
		if(suma > sumb){
			int temp = suma;
			suma = sumb;
			sumb = temp;
		}
			
		printf("%.2lf %\n", (double)suma*100/sumb);
		
	}
}

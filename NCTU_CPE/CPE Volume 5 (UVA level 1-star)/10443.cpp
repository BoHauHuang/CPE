#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;

int main(){
  string s;
  int num;
  while(cin >> s){
    if(s[0] == '-')
      break;
    stringstream ss;
    ss.str(s);
    if(s[1] == 'x'){
      ss >> hex >> num;
      printf("%d\n", num);
    }
    else{
      ss >> dec >> num;
      printf("0x%X\n", num);
    }
  }
}

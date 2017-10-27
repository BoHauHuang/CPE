#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	int cas, day = 1;
	while(cin >> cas){
		int hour[2*cas+1], minute[2*cas+1];
		int count = 0;
		bool h_flag = true;
		string sub;
		while(count < cas){
			scanf("%d:%d", &hour[2*count], &minute[2*count]);
			scanf("%d:%d", &hour[2*count+1], &minute[2*count+1]);
			getline(cin, sub);
			count++;
		}
		hour[2*cas] = 18;
		minute[2*cas] = 0;
		int maxhour = 0, maxminute = 0, starthour = 0, startminute = 0;
		for(int i = 1 ; i < 2*cas+1 ; i = i+2){
			if(hour[i+1] - hour[i] > maxhour){
				if(minute[i+1] - minute[i] >= 0){
					maxhour = hour[i+1] - hour[i];
					maxminute = minute[i+1] - minute[i];
					starthour = hour[i];
					startminute = minute[i];
				}
				else{
					if(60 + minute[i+1] - minute[i] > maxminute){
						maxminute = 60 + minute[i+1] - minute[i];
						maxhour = hour[i+1] - hour[i] - 1;
						starthour = hour[i];
						startminute = minute[i];
					}
				}
			}
			
			else if(maxhour == 0 && hour[i+1] == hour[i] && minute[i+1] - minute[i] > maxminute){
				h_flag = false;
				maxminute = minute[i+1] - minute[i];
				starthour = hour[i];
				startminute = minute[i];
			}
		}
		
		if(!h_flag){
		if(startminute > 10)cout << "Day #" << day << ": the longest nap starts at " << starthour << ":" << startminute << " and will last for " << maxminute << " minutes." << endl;
		else cout << "Day #" << day << ": the longest nap starts at " << starthour << ":0" << startminute << " and will last for " << maxminute << " minutes." << endl;
		}
		
		if(h_flag){
		if(startminute > 10)cout << "Day #" << day << ": the longest nap starts at " << starthour << ":" << startminute << " and will last for " << maxhour << " hours and " << maxminute << " minutes." << endl;
		else cout << "Day #" << day << ": the longest nap starts at " << starthour << ":0" << startminute << " and will last for " << maxhour << " hours and " << maxminute << " minutes." << endl;
		}
		
		day++;
	}
}

#include <iostream>

using namespace std;

void queue(int start, int counter, int num[]){
	for(int i = start ; i < counter ; i++){
        	for(int k = i ; k < counter ; k++){
         		if(num[i] > num[k]){
            		int temp = num[k];
            		num[k] = num[i];
             	  	num[i] = temp;
            	}
            	else{
            		num[i] = num[i];
            		num[k] = num[k];
				}
        	}
   		}
}

int n;

int main()
{
    while((cin >> n) != 0){
    	if(n == 0) break;
        int num[n], total[n-1], counter = n;
        while(n != 0){
        	n--;
            cin >> num[n];
        }
        int sum = 0, start = 0;
		queue(start, counter, num);
		
   		total[0] = num[0] + num[1];
   		num[1] = total[0];
        for(int j = 2 ; j < counter ; j++){
        	queue(start, counter, num);
        	if(num[j] < num[j-1]){
				start = j-1;
				queue(start, counter, num);
				total[j-1] = num[j-1] + num[j];
				num[j-1] = total[j-1];
			}
        	else{
        		if(j == counter-1){
					total[j-1] = num[j-1] + num[j];
					break;	
				}
				else{
					total[j-1] = num[j-1] + num[j];
					num[j-1] = total[j-1];
				}
			}
			start++;
        }
        for(int k = 0 ; k < counter-1 ; k++){
        	sum += total[k];
		}
        cout << sum << endl;
    }
    return 0;
}

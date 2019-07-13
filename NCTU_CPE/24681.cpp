#include<stdio.h>
#include<stdlib.h>

int input[101], divide, count = 1, a, k, i;

int main(){
	for(a = 0 ; a < 101 ; a++){
		scanf("%d", &input[a]);
		if(input[a] == 0) break;
		count++;
	}
	int flag[count];
	count--;
	int all = count;
	while(count >= 0){
		divide = 0;
		for(k = 1 ; k < input[count] ; k++){
			if(input[count] % k == 0) divide += k;
			if(divide > input[count]){
				flag[count] = 1;
				break;
			}
		}
		if(divide < input[count]) flag[count] = 2;
		if(divide == input[count]) flag[count] = 0;
		
		count--;
	}
	printf("PERFECTION OUTPUT\n");
	for(i = 0 ; i < all ; i++){
		printf("%5d  ", input[i]);
		if(flag[i] == 0) printf("PERFECT\n");
		if(flag[i] == 1) printf("ABUNDANT\n");
		if(flag[i] == 2) printf("DEFICIENT\n");
	}
	printf("END OF OUTPUT\n");
	
}

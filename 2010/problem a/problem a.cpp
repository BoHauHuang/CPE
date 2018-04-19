#include<iostream>
using namespace std;
class FindLCOS{
	public:
		FindLCOS(int c);
		~FindLCOS();
		void push(int n);
		void show();
		int length();
		int sum();
	private:
		int *arr;
		int cap;
		int len;
		int ans = 0;
};

FindLCOS::FindLCOS(int c){
	cap = c;
	len = 0;
	arr = new int[c];
}
FindLCOS::~FindLCOS(){
	delete [] arr;
}

void FindLCOS::push(int n){
	if(cap > len) arr[len] = n, len++;
}

void FindLCOS::show(){
	int max_len = 1, temp_max_len = 1, flag = 0, temp_sum = 0, max_sum = 0;
	for(int k = 1 ; k < len ; k++){
		if(arr[k] >= arr[k-1]){
			//flag = k;
			temp_max_len += 1;
			temp_sum += arr[k-1];
		}
		else if(arr[k] < arr[k-1]){
			if(temp_max_len > max_len || temp_max_len == max_len){
				flag = k-1;
				max_len = temp_max_len;
				temp_max_len = 1;
				if(temp_sum > max_sum)max_sum = temp_sum+arr[k-1];
				//cout << "s_ma chaneged : "<<max_sum<<endl;
				temp_sum = 0;
			}
		}
		if(arr[k] >= arr[k-1] && k == len-1 && temp_max_len > max_len){
			max_len = temp_max_len;
			temp_sum += arr[k];
			flag = k;
		}
	}
	for(int p = flag-max_len+1 ; p <= flag ; p++){
		if(p > flag-max_len+1) cout << " ";
		cout << arr[p];
	}
}

int FindLCOS::length(){
	int max_len = 1, temp_max_len = 1, flag = 0, temp_sum = 0, max_sum = 0;
	for(int k = 1 ; k < len ; k++){
		if(arr[k] >= arr[k-1]){
			//flag = k;
			temp_max_len += 1;
			temp_sum += arr[k-1];
		}
		else if(arr[k] < arr[k-1]){
			if(temp_max_len > max_len || temp_max_len == max_len){
				flag = k-1;
				max_len = temp_max_len;
				temp_max_len = 1;
				if(temp_sum > max_sum) max_sum = temp_sum+arr[k-1];
				//cout << "s_ma chaneged : "<<max_sum<<endl;
				temp_sum = 0;
			}
		}
		if(arr[k] >= arr[k-1] && k == len-1 && temp_max_len > max_len){
			max_len = temp_max_len;
			temp_sum += arr[k];
			flag = k;
		}
		//cout <<k <<" : "<<  "( "<<flag <<" , "<< max_len << " , " <<temp_max_len<<" )" << "  -- " << len  << " -- " <<max_sum<< endl;
		//cout << "ts : " << temp_sum << endl;
	}
	return max_len;
}

int FindLCOS::sum(){
	int max_len = 1, temp_max_len = 1, flag = 0, temp_sum = 0, max_sum = 0;
	for(int k = 1 ; k < len ; k++){
		if(arr[k] >= arr[k-1]){
			//flag = k;
			temp_max_len += 1;
			temp_sum += arr[k-1];
		}
		else if(arr[k] < arr[k-1]){
			if(temp_max_len > max_len || temp_max_len == max_len){
				flag = k-1;
				max_len = temp_max_len;
				temp_max_len = 1;
				if(temp_sum > max_sum)max_sum = temp_sum+arr[k-1];
				//cout << "s_ma chaneged : "<<max_sum<<endl;
				temp_sum = 0;
			}
		}
		if(arr[k] >= arr[k-1] && k == len-1 && temp_max_len > max_len){
			max_len = temp_max_len;
			temp_sum += arr[k];
			flag = k;
		}
		//cout <<k <<" : "<<  "( "<<flag <<" , "<< max_len << " , " <<temp_max_len<<" )" << "  -- " << len  << " -- " <<max_sum<< endl;
		//cout << "ts : " << temp_sum << endl;
	}
	for(int p = flag-max_len+1 ; p <= flag ; p++) ans += arr[p];
	return ans;
}

int main(){
	int n;
 cin >> n;
 FindLCOS flcos(n);
 for (int i=0;i<n;i++) {
 int element;
 cin >> element;
 flcos.push(element);
 }
 flcos.show();
 cout << endl << flcos.length() << endl;
cout << flcos.sum() << endl;
return 0;
}

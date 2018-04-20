#include<iostream>
#include<cstring>
using namespace std;
class BigString{
	public:
		void set(char *s);
		char* show();
		int length();
		friend BigString operator+(const BigString &,const BigString &);
		BigString operator*(int);
		friend BigString operator-(const BigString &, const BigString &);
		void operator=(const BigString &);
		void replace(const BigString &, const BigString&);
	private:
		char *str;
		int len;
};

void BigString::set(char *s){
	len = strlen(s)+1;
	str = new char[len];
	for(int i = 0 ; i < len-1 ;i++) str[i] = s[i];
	str[len-1] = '\0';
}

char* BigString::show(){
	return str;
}

void BigString::operator=(const BigString &s){
	len = s.len;
	str = new char[len];
	strcpy(str,s.str);
}

BigString operator+(const BigString &s1,const BigString &s2){
	strcat(s1.str, s2.str);
	return s1;
}

BigString BigString::operator*(int n){
	char *temp_str = str;
	temp_str = new char[len];
	strcpy(temp_str,str);
	for(int i = 0 ; i < n-1 ; i++) str = strcat(str,temp_str);
	return *this;
	
}

BigString operator-(const BigString &s1, const BigString &s2){
	char *del_str;
	del_str = strstr(s1.str, s2.str);
	strcpy(del_str,"");
	return s1;
}

void BigString::replace(const BigString &s1,const BigString &s2){
	BigString ans;
	int new_length = 0, j;
	for(int i = 0 ; i < this->len ;){
		bool same = true;
		for(j = 0 ; j < s1.len ; j++){
			if(this->str[i+j] != s1.str[j]) same = false;
		}
		
		if(!same){
			ans.str[new_length++] = str[i++];
			cout << "not same : " << ans.str << endl;
		}
		if(same){
			for(int k = 0 ; k < s2.len ; k++) 
				ans.str[new_length++] = s2.str[k];
			i += s1.len-1;
			cout << "same replace : " << ans.str << endl;
		}
	}
	
	this->str = new char[new_length];
	strcpy(str,ans.str);
	
}

int main(){
	BigString a,b,c,d,e;
	a.set("OOPOOP");
	b.set("AA");
	c.set("OO");
	d.set("O");
	cout<<a.show()<<endl; 
	cout<<b.show()<<endl;
	cout<<c.show()<<endl;
	cout<<d.show()<<endl;
	a.replace(c,b);
	cout << "After replace : " << a.show()<<endl;
	//e = e-c;
	//cout<<e.show()<<endl;
	//c.set("Q_Q");
	//cout<<c.show()<<endl;
	return 0;
}

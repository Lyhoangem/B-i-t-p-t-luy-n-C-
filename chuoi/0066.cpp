#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i=0;
	while(s[0]!=' '){
		s[i]=s[i+1];
		i++;
	}
	cout<<s;
	
}

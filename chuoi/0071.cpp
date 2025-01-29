#include<iostream>
#include<string>
using namespace std;
int main(){	
	string s;
	getline(cin,s);
	string n;
	getline(cin,n);
	string m;
	getline(cin,m);
	for(int i=0;i<s.size();i++){
		if(s[i]==n[0]){
			s[i]=m[0];
		}
	}
	cout<<s;
}

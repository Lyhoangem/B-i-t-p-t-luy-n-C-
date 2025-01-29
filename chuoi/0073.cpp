#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;



int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if('A'<=s[i]&&s[i]<='Z') s[i]+=32;
	}
	cout<<s;
}

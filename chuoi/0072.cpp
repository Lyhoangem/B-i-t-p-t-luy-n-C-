#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;



int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if('a'<=s[i]&&s[i]<='z') s[i]-=32;
	}
	cout<<s;
}

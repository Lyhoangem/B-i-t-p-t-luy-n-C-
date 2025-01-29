#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	
	string s;
	getline(cin,s);
	
	for(int i=0;i<s.size();i++){
		if('a'<=s[0]&&s[0]<='z') s[0]-=32;
		if(s[i-1]==' '&&('a'<=s[i]&&s[i]<='z')) s[i]-=32;
	}
	
	cout<<s;
	
	
}

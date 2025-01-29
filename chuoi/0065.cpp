#include<iostream>
#include<string>
using namespace  std;
int main(){
	string s;
	getline(cin,s);
	int dem=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]==s[s.size()-i-1]) dem++;
	}
	
	if(dem==s.size()/2) cout<<"Yes";
	else cout<<"No";
} 

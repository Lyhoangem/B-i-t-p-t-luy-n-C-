#include<iostream>
#include<string>
using namespace std;
int main(){
	string s, n, m;
	getline(cin,s);
	getline(cin,n);
	getline(cin,m);
	
	int pos = s.find(n);
	
	while(pos != string::npos){
		s.replace(pos, (int)n.size(), m);
		pos = s.find(n, pos+1);
	}
	
	cout<<s;
}

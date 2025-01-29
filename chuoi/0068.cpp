#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string res;
	stringstream ss(s);
	while(ss>>res){
	cout<<res<<" ";
	}
}

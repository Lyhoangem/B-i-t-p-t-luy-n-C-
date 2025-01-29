#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	string res;
	stringstream ss(s);
	while(ss>>res){
		v.push_back(res);
	}
	cout<<v.back();
}

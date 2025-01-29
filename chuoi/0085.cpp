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
	
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i]<<" ";
	}
}

#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

string strrev(string s){
	for(int i=0;i<s.size()/2;i++){
		char temp = s[i];
		s[i]=s[s.size()-1-i];
		s[s.size()-1-i]=temp;
	} 
	return s;
}

int main(){
	string s;
	getline(cin,s);
	string res;
	stringstream ss(s);
    vector<string> v;
	while(ss>>res){
		v.push_back(strrev(res));
	}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	
}

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string find;
	getline(cin,find);
	
		int dem=0;
		vector<string> v;
		string res;
		stringstream ss(s);
		while(ss>>res){
			v.push_back(res);
		}
		for(int i=0;i<v.size();i++){
		 if(v[i].find(find)!=string::npos) dem++;
		}
		cout<<dem;

}

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){	
	string s;
	getline(cin,s);
	string n;
	getline(cin,n);
	string m;
	getline(cin,m);
     vector<string> v;
	 stringstream ss(s);
	 string res;
	 while(ss>>res){
	 	v.push_back(res);
	 } 
	 for(int i=0;i<v.size();i++){
	 	if(v[i]==n) v[i]=m;
	 } 
	 
	 for(int i=0;i<v.size();i++){
	 	cout<<v[i]<<" ";
	 } 
	 
	 
}

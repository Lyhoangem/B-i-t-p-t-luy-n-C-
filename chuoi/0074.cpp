#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	
	string s;
	getline(cin,s);
     stringstream  ss(s);
     string res;
     vector<string> v;
     while(ss>>res){
     	v.push_back(res);
	 }
for(int i=v.size()-1;i>=0;i--){
	cout<<v[i]<<" ";
}


}

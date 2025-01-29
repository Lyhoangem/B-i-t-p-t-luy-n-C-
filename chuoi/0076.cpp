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
	for(int i=0;i<s.size();i++){
		if(find[i]==s[i]){
			dem++;
		}
	}
	cout<<dem;
}

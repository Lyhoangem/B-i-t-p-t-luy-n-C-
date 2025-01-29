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
	int dem=0;
	while(ss>>res){
	dem++;
	}
	cout<<dem;
}

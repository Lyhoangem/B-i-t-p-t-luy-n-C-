#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int dem=0;
  for(int i=0;i<s.size();i++){
  	if('a'<=s[i]&&s[i]<='z'){
  		dem++;
	  }
  }
  cout<<dem;
}

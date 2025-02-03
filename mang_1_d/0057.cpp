#include<bits/stdc++.h> 
using namespace std;
int main(){
	set<int> v;
	string s;
	while(true){
		getline(cin,s);
		if(s.empty()) break;
		int number;
		stringstream ss(s);
		while(ss>>number){
			v.insert(number);
		}
	}
 cout<<v.size();
	}

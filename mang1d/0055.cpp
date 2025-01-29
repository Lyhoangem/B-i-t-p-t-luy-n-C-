#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	string s;
	while(true){
		getline(cin,s);
		if(s.empty()) break;

		stringstream ss(s);
		int number;
		while(ss>>number){
			v.push_back(number);
		}
	}
	
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]<v[j]){
				int temp =v[i];
			v[i]=v[j];
			v[j]=temp;
			}
		}
	}
	int maxnhi =v[0];
for(int i=0;i<v.size();i++){
	if(v[i]<maxnhi){
		maxnhi=v[i];
		break;
	}
}
	cout<<maxnhi;
	
	
}

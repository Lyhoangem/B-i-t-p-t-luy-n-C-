#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>
using namespace std;


bool checknguyento(int n){
	if(n<=1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	
	vector<int> v;
	string s;
	
	while(true){
		getline(cin,s);
		if(s.empty()){
			break;
		}
		int res;
		stringstream ss(s);
		while(ss>>res){
			v.push_back(res);
		}
	}
	int sum=0;
	for(int i=0;i<v.size();i++){
		if(checknguyento(v[i])){
			cout<<v[i]<<" ";
			sum+=v[i];
		}
	}
	if(sum!=0){
		cout<<endl;
		cout<<sum;
	}
	else{
        cout<<"-"<<endl;
        cout<<0;
    }
}

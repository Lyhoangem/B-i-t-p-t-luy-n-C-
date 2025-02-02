#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	for(int i=0;i<=n;i++){
		if(i*i==n) return 1;
	}
	return 0;
}


int main(){
	vector<int> v;
	string s;
	while(true){
		getline(cin,s);
		if(s.empty()) break;
		int number;
		stringstream ss(s);
		while(ss>>number){
			v.push_back(number);
		}
	}
	int dem=0, sum=0;
	for(int i=0;i<v.size();i++){
		if(check(v[i])) {
			dem++;
			sum+=v[i];
		}
	}
	if(dem!=0){
		cout<<fixed<<setprecision(1)<<(double)sum/dem;
	}
	else cout<<"-";
} 

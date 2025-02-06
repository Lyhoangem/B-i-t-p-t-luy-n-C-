#include<iostream>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;
bool KiemTraSoNguyenTo(int n){
	if(n<=1) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	 vector<int> v;
    int n;
    while(cin>>n){
    	v.push_back(n);
	}
	
	int count=0;
	for(int i=0;i<v.size();i++){
		if(KiemTraSoNguyenTo(v[i])==1) count++;
	}
if(count==0) cout<<"-";
else {
	cout<<count;
}
} 





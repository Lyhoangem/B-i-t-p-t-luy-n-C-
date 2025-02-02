#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;

bool check(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
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
	int dem=0;
	for(int i=0;i<v.size();i++){
		if(check(v[i])) dem++;
	}
	if(dem!=0) cout<<dem;
	else cout<<"-";
}

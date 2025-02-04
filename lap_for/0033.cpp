#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool check_nguyen_to(int n){
	if(n<2) return 0;
	int check=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			check =0;
			return check;
		}
	}
	return check;
}
int main(){
	int a, b;
	cin>>a>>b;
	int sum=0, dem=0;
	for(int i=a;i<=b;i++){
		if(check_nguyen_to(i)) dem++;
	}
	
	
	cout<<dem;
	return 0;
}

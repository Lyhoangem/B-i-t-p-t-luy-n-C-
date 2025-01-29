#include<iostream>
#include<cmath>
using namespace std;

long long tong(int a[], int n[], int m, int mu ){
	
	long long sum=0; 
	for(int i=0;i<m;i++){
		sum+= a[i]*(pow(mu,n[i]));
	}
	return sum; 
}

int main(){
	int m, mu;
	cin>>m>>mu;
	int a[m];
	int n[m];
	for(int i=0;i<m;i++){
		cin>>a[i]>>n[i];
	}
	cout<<tong(a,n,m,mu);
}

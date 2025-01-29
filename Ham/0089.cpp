#include<iostream>
#include<cmath>
using namespace std;

int giaithua(int a){
	if(a==1||a==0) return 1;
	return a*giaithua(a-1);
}

int  tohop(int n, int k){
	int tohop = giaithua(n)/(giaithua(k)*giaithua(n-k));
	return tohop;
}

int main(){
	int m;
	cin>>m;
     int n[m];
     int k[m];
     for(int i=0;i<m;i++){
     	cin>>n[i]>>k[i];
	 }
	int sum=0;
	for(int i=0;i<m;i++){
		sum+=tohop(n[i],k[i]);	
	}
	cout<< sum;
}

#include<iostream>
#include<iomanip>
using namespace std;

double tong(int a, int b){
	return a+b;
}

double chia(int a, int b){
	double k =(double)a/b;
}


int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<tong(a,b)+c;
	cout<<fixed<<setprecision(2)<<chia(a,b)+c;
	cout<<fixed<<setprecision(3)<<chia(a,tong(b,c));
	
} 

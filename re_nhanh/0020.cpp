#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
long long n;
	cin>>n;
	
	int k5=0, k2=0;
	if(n>=5000) {
		k5=n/5000;
		n%=5000;
	}

	if(n>=2000){
		k2=n/2000;
		n%=2000;
	}
	
	cout<<k5<<" "<<k2<<" "<<n/1000;
	
	
	
	
	
}

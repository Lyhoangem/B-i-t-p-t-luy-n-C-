#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool checknguyento(int n){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}



int main(){
	
	int k, dem=1;
	cin>>k;
	int i=2;
	while(dem<=k){
		if(checknguyento(i)) {
			cout<<i<<" ";
		dem++;
		}
		i++;	
	} 	
}

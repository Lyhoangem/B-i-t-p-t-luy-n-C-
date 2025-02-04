#include<iostream>
#include<cmath>
using namespace std;
bool check(int n){
	if(n<2) return 1;
	for(int i=2;i<=sqrt(n);i++){
		if(i*i==n) return 1;
	}
	return 0;
}
int main(){	
int k, dem=1;
cin>>k;
int i=0;
   while(dem<=k){
    if(check(i)){
    	dem++;
    	cout<<i<<" ";
	}
   	i++;
   }
}

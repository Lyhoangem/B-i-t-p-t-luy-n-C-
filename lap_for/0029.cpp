#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=2;i<n;i++){
		if(n%i==0) sum++;
	}
	if(n==1) cout<<"No";
   else if(sum==0) cout<<"Yes";
   else cout<<"No";


	return 0;
}

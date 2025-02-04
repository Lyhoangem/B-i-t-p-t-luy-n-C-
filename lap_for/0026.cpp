#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%15==0) sum+=i;
	}
	
	cout<<sum;
	return 0;
}

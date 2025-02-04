#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int sum=0, dem=0;
	for(int i=a;i<=b;i++){
		if(i%3==0||i%5==0) dem++;
		if(i%2==0) sum+=i;
	}
	
	
	cout<<dem<<" "<<sum;
	return 0;
}

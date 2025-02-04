#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int sum=0;
	for(int i=a;i<=b;i++){
		if(i%3==0) sum++;
	}
	cout<<sum;
	return 0;
}

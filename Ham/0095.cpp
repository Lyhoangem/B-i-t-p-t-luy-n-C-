#include<iostream>
#include<iomanip>
using namespace std;

double tbtong(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	double r=(double)sum/n;
	return r;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
cout<<fixed<<setprecision(1)<<tbtong(arr,n);
}

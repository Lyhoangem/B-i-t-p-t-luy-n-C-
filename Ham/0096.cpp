#include<iostream>
#include<iomanip>
using namespace std;

double tongchan(int arr[], int n){
	double sum=0;
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0) {
			sum+=arr[i];
			dem++;
		}
	}
	if(dem!=0)
	return (double)sum/dem;
	else return 0;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<fixed<<setprecision(2)<<tongchan(arr,n);
	
}

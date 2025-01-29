#include<iostream>
using namespace std;
#define MAX 300
void nhapmang(int arr[], int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void tansuat(int arr[], int n){
	for(int i=0;i<n;i++){
	 int check=1;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
				check=0;
				break;
			}
		}
	if(check == 1){
		int dem=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]) dem++;
		}
	cout<<arr[i]<<" "<<dem<<endl;	
	}
}
}

int main(){
	int arr[MAX], n;
	nhapmang(arr,n);
	tansuat(arr,n);
	
}

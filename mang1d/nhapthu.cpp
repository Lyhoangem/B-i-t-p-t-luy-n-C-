#include<iostream>
using namespace std;

void nhapmang(int arr[], int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
}
 void tansuat(int arr[], int n){
 	int dem;
 	int b[n]={0};
 	for(int i=0;i<n;i++){
 		if(b[i]==0){
 			dem=1;
 			for(int j=i+1;j<n;j++){
 				if(arr[i]==arr[j]){
 					dem++;
 					b[j]=1;
				 }
			 }
			 cout<<arr[i]<<" "<<dem<<endl;
		 }
 		
	
	 }	
 }
int main(){
	int arr[100], n;
	nhapmang(arr, n);
	tansuat(arr,n);
}

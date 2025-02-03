#include<iostream>

#include<vector>
using namespace std;
int main(){
	
 int n;
 cin>>n;
 int arr[100];
 for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int dem=0;
 for(int i=0;i<n;i++){
 	int check =1;
 	for(int j=0;j<i;j++){
 		if(arr[i] == arr[j]){
 			check=0;
 			break;
		 }
	 }
 	if(check == 1) dem++;
 }
	
	int so[100];
	int max=0, vitri=0;
	for(int i=0;i<n;i++){
		int check =1;
 	for(int j=0;j<i;j++){
 		if(arr[i] == arr[j]){
 			check=0;
 			break;
		 }
	 }
 	if(check == 1) {
 		int demrieng=1;
 		for(int j=i+1;j<n;j++){
 			if(arr[i]==arr[j]){
 				demrieng++;
			 }
			 
			 if(demrieng>max){
			 	max=demrieng;
			 vitri=i;
			 }
		 }
		 
	 }
		
	}
	cout<<s[vitri]<<" "<<max;
	
} 

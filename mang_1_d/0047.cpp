#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
   
  int dem_duong=0, dem_am=0;
  
  for(int i=0;i<n;i++){
  	if(arr[i]>0) dem_duong++;
  	if(arr[i]<0) dem_am++;
  }
  
  cout<<dem_duong<<" "<<dem_am<<endl;
  if(dem_duong!=0){
  	for(int i=0;i<n;i++){
  		if(arr[i]>0) cout<<arr[i]<<" ";
	  }
	  cout<<endl;
  }
  else {
  	cout<<"-"<<endl;
  }
  if(dem_am!=0){
  		for(int i=0;i<n;i++){
  		if(arr[i]<0) cout<<arr[i]<<" ";
	  }
	  cout<<endl;
  }
  else cout<<"-"<<endl;
  
  
}

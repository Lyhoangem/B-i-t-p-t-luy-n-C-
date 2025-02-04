#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int arr[3];

    for(int i=0;i<3;i++){
    	cin>>arr[i];
	}
	
	int max=arr[0];
	if(arr[0]==arr[1]&&arr[1]==arr[2]) cout<<"=";
else {
	for(int i=0;i<3;i++){
		if(arr[i]>max) max=arr[i];
	}
	
	cout<<max;
}

	
	
	
	
}

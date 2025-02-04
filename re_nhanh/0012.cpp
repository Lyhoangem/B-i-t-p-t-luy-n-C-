#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int s;
	cin>>s;
     
     int arr[3];
     int dem=0;
     for(int i=s;i>0;i/=10){
     	arr[dem]=i%10;
     	dem++;
	 }
	
	cout<<arr[2]<<arr[1]<<" "<<arr[1]<<arr[0];
	
}

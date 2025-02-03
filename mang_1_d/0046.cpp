#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x;
	cin>>x;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
   int dem=0;
   for(int i=0;i<n;i++){
   	if(arr[i]==x) dem++;
   }
   
   if(dem==0) cout<<"No";
   else{
   	for(int i=0;i<n;i++){
   		if(arr[i]==x){
   			cout<<"Yes"<<endl;
   			cout<<i;
   			break;
		   }
	   }
   }
   
   
}

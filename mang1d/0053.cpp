#include<iostream>
#include<sstream>
#include<cmath>
#include<vector>
using namespace std;


bool nguyento(int n){
	if(n<=1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}


int main(){
	vector<int> arr;
	string s;
	int A[100];
	
	//nhap mang
	while(true){
	getline(cin,s);
	 if(s.empty()) break;
	 
	 int number;
	 stringstream ss(s);
	 while(ss>>number){
	 	arr.push_back(number);
	 }	
	}
	// dem so nguyen to
	int dem=0;
	for(int i=0;i<arr.size();i++){
		if(nguyento(arr[i])) dem++;
	}
	
	// xet truong hop dem=0 va dem khac 0
	if(dem==0) cout<<"-";
	
	else{
	int count =0;
	while(count<dem){
		for(int i=0;i<arr.size();i++){
			if(nguyento(arr[i])){
				A[count]=arr[i];
				count++;
			}
		}
	}
	
	//tim max
	int max=A[0];
	for(int i=0;i<count;i++){
		if(A[i]>max) max = A[i];
	}
	cout<<max;
	}

	
	
}

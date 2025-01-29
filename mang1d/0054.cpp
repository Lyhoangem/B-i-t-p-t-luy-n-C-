#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	string s;
	int A[100];
	while(true){
		getline(cin,s);
		if(s.empty()) break;

		stringstream ss(s);
		int number;
		while(ss>>number){
			v.push_back(number);
		}
	}
	
int dem_am=0;
for(int i=0;i<v.size();i++){
	if(v[i]<0) dem_am++;
}

	if(dem_am==0) cout<<"-";
	else {
		
	int j=0;
	while(j<dem_am){
		for(int i=0;i<v.size();i++){
			if(v[i]<0){
				A[j]=v[i];
				j++;
			}
		}
	}
		
		int max=A[0];
		for(int i=0;i<dem_am;i++){
			if(A[i]>max) max =A[i];
		}
	cout<<max;
		
		
		
		
	}
	
	
	
	
	
}

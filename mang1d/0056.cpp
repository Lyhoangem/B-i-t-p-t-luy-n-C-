#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	string s;
	while(true){
		getline(cin,s);
		if(s.empty()) break;

		stringstream ss(s);
		int number;
		while(ss>>number){
			v.push_back(number);
		}
	}
	int dem=1;
	 
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				int temp =v[i];
			v[i]=v[j];
			v[j]=temp;
			}
		}
	}
	int minnhi =v[0];
for(int i=0;i<v.size();i++){
	if(v[i]>minnhi){
		minnhi=v[i];
		dem++;
		break;
	}
}
	
 int min3=0;
 for(int i=0;i<v.size();i++){
 	if(v[i]>minnhi){
 		min3=v[i];
 		dem++;
 		break;
	 }
 } 
 if(dem>=3)
	cout<<min3;
	else cout<<"-";

	
}

#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char n;
	cin>>n;
	int dem=0,  vt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==n){
			vt=i;
			dem++;
			break;
		}
	}
	if(dem!=0) cout<<vt;
	else cout<<"-1";
}

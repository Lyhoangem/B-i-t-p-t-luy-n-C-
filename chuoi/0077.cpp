#include<iostream>
#include<string>
#include<cstring>
#include<set>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	int dem=0;
	
	for(int i=0;i<s.size();i++){
		
		int check=1;
		for(int j=0;j<i;j++){
			if(s[i]==s[j]) {
				check=0;
				break;
			}
		}
		if(check==1) dem++;
	}
cout<<dem;
}

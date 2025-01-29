#include<iostream>
#include<string>
#include<cstring>
#include<set>

using namespace std;
int main(){
	string s;
	getline(cin,s);
	
	
	for(int i=0;i<s.size();i++){
		if('A'<=s[i]&&s[i]<='Z') s[i]+=32;
	}
	
	
	for(int i=0;i<s.size();i++){
		int check=1;
		for(int j=0;j<i;j++){
			if(s[i]==s[j]) {
				check=0;
				break;
			}
		}
		if(check==1){
			int dem=1;
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]) dem++;
			}
			
			cout<<s[i]<<":"<<dem<<" ";
		}
	}
}

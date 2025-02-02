#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	
	int n=s.size();
	int i=n-1;
	while(i>=0&&s[i]==' '){
		i--;
	}
	for(int j=0;j<=i;j++){
		cout<<s[j]; 
	}
	
}

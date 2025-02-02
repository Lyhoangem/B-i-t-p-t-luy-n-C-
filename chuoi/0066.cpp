#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int n=s.size();
	int i=0;
 while(s[i]==' ' && i<n){
 	i++;
 } 
	for(int j=i;j<n;j++){
		cout<<s[j];
	}	
}

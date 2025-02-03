#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
int n=s.size();
for(int i=0;i<n;i++){
	if('A'<=s[i] && s[i]<='Z') s[i]+= 32;
}

//tim so luong cac ki tu khac nhau;
int dem=0;
 for(int i=0;i<n;i++){
 	int check =1;
 	if(s[i]==' ') continue;
 	for(int j=0;j<i;j++){
 		if(s[i] == s[j]){
 			check=0;
 			break;
		 }
	 }
 	
 	if(check == 1) dem++;
 }

int vitri=0, tansomax=0;
for(int i=0;i<n;i++){
	
 for(int i=0;i<n;i++){
 	int check =1;
 	if(s[i]==' ') continue;
 	for(int j=0;j<i;j++){
 		if(s[i] == s[j]){
 			check=0;
 			break;
		 }
	 }
 	if(check == 1){
 		int demrieng=1;
 		
 			for(int j=i+1;j<n;j++){
 			if(s[i]==s[j]) demrieng++;
			 }
		
 		if(demrieng > tansomax) {
 			tansomax = demrieng;
 			vitri=i;
		 }
	 }
 }
}
	cout<<s[vitri]<<":"<<tansomax;
}




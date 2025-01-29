#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
using namespace std;
#define MAX 300


int main(){
	string s;
	getline(cin,s);
   string word(s.size(), ' '); 
   int dem=0;
   int i=s.size()-1;
   while(dem<s.size()){
   	word[dem]=s[i];
   	i--;
   	dem++;
   }
   
  cout<<word; 
  
  
} 

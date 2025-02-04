#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int s;
	cin>>s;
	int h=0, m=0;
	if(s>=3600) {
		h=s/3600;
		s%=3600;
	}
     if(s>=60){
		m=s/60;
		s%=60;
	}
	
	cout<<h<<":"<<m<<":"<<s;
	
	
	
}

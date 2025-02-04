#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int min,max;
 a>b?max=a:max=b;
b>a?min=a:min=b;
	while(min>0){
		int r=max%min;
		max=min;
		min = r;
	}
	
	int UC=max;
cout<<a/UC<<"/"<<b/UC;
	
}

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
int km;
int tien;
	cin>>km;
	
	if(km>30) {
		tien=9000*(km-30)+29*10000+12000;
	}
	else if(km>1) tien = (km-1)*10000+12000;
	
	cout<<tien;
	
	
	
}

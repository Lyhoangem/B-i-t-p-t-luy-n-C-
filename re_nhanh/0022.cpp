#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int kwh;
	cin>>kwh;
	long long tien50dau=0, tien50sau=0, tien100=0, tienconlai=0, tongtien=0;
	
	if(kwh>200){
		tienconlai=1500*(kwh-200);
		kwh=200;
	}
    if(100<kwh&&kwh<=200){
    	tien100=(kwh-100)*1100;
    	kwh=100;
	}
	if(50<kwh&&kwh<=100){
		tien50sau=(kwh-50)*800;
		kwh=50;
	}
	if(kwh<=50){
		tien50dau=kwh*600;
	}
	
tongtien=tien50dau+tien50sau+tien100+tienconlai;
cout<<tongtien;
}

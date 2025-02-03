#include<iostream>
#include<cmath>
using namespace std;

int UCLN(int s1, int s2){
	if(s2==0) return s1;
	return UCLN(s2,s1%s2) ;
}

void tong(int a, int b, int c, int d){
	int tu, mau;
	a/=UCLN(a,b);
	b/=UCLN(a,b);
	
	c/=UCLN(c,d);
	d/=UCLN(c,d);
	
	
	if(b==d){
		tu=a+c;
		mau=b;
	}
	else if(b%d==0){
		mau=b;
		tu=a+c*(b%d);
	}
	else if(d%b==0){
		mau=d;
		tu=b+a*(d%b);
	}
	else{
		tu=a*d+c*b;
		mau=b*d;
	}
	
	int songuyen=tu/mau;
	if(songuyen>0){
		tu=tu-mau*songuyen;
	     int sotoigian=UCLN(tu,mau);
	     tu/=sotoigian;
	     mau/=sotoigian;
	     cout<<songuyen<<","<<tu<<"/"<<mau;
	}
	else{
		int sotoigian=UCLN(tu,mau);
	     tu/=sotoigian;
	     mau/=sotoigian;
	     cout<<tu<<"/"<<mau;
	}
	
}



int main(){
	int a,b;
	cin>>a>>b;
	int c,d;
	cin>>c>>d;
	tong(a,b,c,d);
}

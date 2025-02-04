#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;




int main(){
	
	double hk1,hk2;
	cin>>hk1>>hk2;
	double DTB=(double)(hk1+hk2*2)/3;
	cout<<fixed<<setprecision(1)<<DTB<<endl;
	if(DTB>=8) cout<<"Gioi";
	else if(DTB>=6.5) cout<<"Kha";
	else if(DTB>=5) cout<<"Trung binh";
	else if(DTB>3.5) cout<<"Yeu";
	else cout<<"Kem";

}

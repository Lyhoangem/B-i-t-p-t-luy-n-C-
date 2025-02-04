#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double chuvi=a+b+c;
	double p=(double)chuvi/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	double R = (double)a*b*c/(4*s);
	
	cout<<fixed<<setprecision(3)<<R;
	
	
}

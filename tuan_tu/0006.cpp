#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	
	double chuvi=a+b+c;
	
	double p=chuvi/2;
	double dientich = (double)sqrt(p*(p-a)*(p-b)*(p-c));;
	cout<<fixed<<setprecision(1)<<chuvi;
    cout<<" ";
    cout<<fixed<<setprecision(3)<<dientich;
	
}

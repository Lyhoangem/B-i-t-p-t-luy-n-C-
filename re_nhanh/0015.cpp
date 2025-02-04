#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool check(int a, int b, int c){
	if(a+b<=c) return 0;
	else if(b+c<=a) return 0;
	else if(c+a<=b)  return 0;	
	else return 1;
}




int main(){
	int a,b,c;
	double P,S;
	cin>>a>>b>>c;
	
	if(check(a,b,c)==0){
		cout<<"Day khong phai la 3 canh cua mot tam giac";
	}
	
	else {
		P=a+b+c;
		double p=(double)P/2;
		S = (double)sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<"Day la 3 canh cua mot tam giac"<<endl;
		cout<<fixed<<setprecision(2)<<P<<" "<<setprecision(1)<<S;
		
		
	}
}


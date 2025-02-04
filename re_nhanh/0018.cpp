#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

bool nhuan(int year){
	if(year%400==0) return 1;
	else if(year%4==0&&year%100!=0) return 1;
	else return 0;
}

int main(){
	
	int month, year;
	cin>>month>>year;
	
	switch(month){
		
		case 1: case 3: case 5: case 7: case 8: case 10:  case 12: cout<<31;
		break;
		case 2: 
		if(nhuan(year)) cout<<29;
		else cout<<28;
		break;
		default:
		cout<<30;
	}
	
	
}

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int month;
	cin>>month;
	switch(month){
		case 2: case 3: case 4: cout<<"Mua Xuan";
		break;
		case 5: case 6: case 7: cout<<"Mua Ha";
		break;
		case 8: case 9: case 10: cout<<"Mua Thu";
		break;
		default:
		case 11: case 12: case 1: cout<<"Mua Dong";	
	}
	
	
	
	
	
}


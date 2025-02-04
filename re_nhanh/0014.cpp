#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	
	/*
	Cho tu?i c?a m?t ngu?i (0<tu?i<=150), tr? l?i:

“Thieu nhi” n?u 0< tu?i<=11

“Thieu nien” n?u 11< tu?i <=25

“Trung nien” n?u 25< tu?i <=50

“Lao nien” n?u tu?i >50
	*/
	
	int tuoi;
	cin>>tuoi;
	
	if(tuoi<=11) cout<<"Thieu nhi";
	else if(tuoi<=25) cout<<"Thieu nien";
	else if(tuoi<=50) cout<<"Trung nien";
	else cout<<"Lao nien";

	
	
	
	
}

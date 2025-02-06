#include<iostream>
#include<cmath>
using namespace std;

int UCLN(int s1,int s2){
	if(s2==0) return s1;
	return UCLN(s2, s1%s2);
}

void DinhDangPhanSo(int Tu, int Mau){
	
	int SoNguyen = Tu/Mau;
	 if(Tu%Mau == 0) cout<<Tu/Mau;

	 else {
		if(SoNguyen > 0){
			Tu = Tu - SoNguyen*Mau;

			int SoToiGian = UCLN(Tu,Mau);
			Tu/=SoToiGian;
			Mau/=SoToiGian;
			
			if(Tu>0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}
			else if(Tu<0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}
			
			cout<<SoNguyen<<","<<Tu<<"/"<<Mau;
		}

		else if(SoNguyen < 0){
			
			int SoToiGian = UCLN(Tu,Mau);
			Tu/=SoToiGian;
			Mau/=SoToiGian;
            
            if(Tu>0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}
			else if(Tu<0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}

			cout<<Tu<<"/"<<Mau;

		}

		else {
			
			int SoToiGian = UCLN(Tu, Mau); 
            Tu /= SoToiGian;
            Mau /= SoToiGian;
            
            if(Tu>0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}
			else if(Tu<0 && Mau<0){
				Tu*=-1;
				Mau*=-1;
			}
            cout << Tu << "/" <<Mau;
		}
	 }

	
}

void TinhTong(int a, int b, int c, int d){
	int Tu = a*d + b*c;
	int Mau = b*d;
	
	DinhDangPhanSo(Tu,Mau);
}

void TinhHieu(int a, int b, int c, int d){
	
	int Tu = a*d - b*c;
	int Mau = b*d;
	
	DinhDangPhanSo(Tu,Mau);
}

void TinhTich(int a, int b, int c, int d){
	
	int Tu = a*c;
	int Mau = b*d;
	
	DinhDangPhanSo(Tu,Mau);
}

void TinhThuong(int a, int b, int c, int d){
	
	int Tu = a*d;
	int Mau = b*c;
	
	DinhDangPhanSo(Tu,Mau);
}

int main(){
	int a,b,c,d;
	cin>>a>>b;
    cin>>c>>d;
    TinhTong(a,b,c,d);
	cout<<endl;
    TinhHieu(a,b,c,d);
    cout<<endl;
    TinhTich(a,b,c,d);
    cout<<endl;
    TinhThuong(a,b,c,d);
}


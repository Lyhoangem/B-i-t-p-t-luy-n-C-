#include<iostream>
#include<iomanip>
using namespace std;
void sao(int d, int r){
	
	for(int i=1;i<=2*r-1;i++){
		if(i==1){
			for(int j=1;j<=d;j++) cout<<"*";
		}
		if(i%2==0) cout<<endl;
		if(i!=1 && i%2!=0 && i!=2*r-1){
			for(int j=1;j<=d;j++){
				if(j==1) cout<<"*";
				if(j!=1 && j!=d) cout<<" ";
				if(j==d) cout<<"*";
			}
		}
		if(i==2*r-1){
			for(int j=1;j<=d;j++){
				cout<<"*";
			}
		}
	}
}

int main(){
	int d,r;
	cin>>d>>r; 
	sao(d,r);
} 

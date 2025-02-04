#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=n;i>0;i/=10){
		sum+=i%10;
	}
    cout<<sum%10<<endl;
	if(sum%10!=9) cout<<"chua may man";
	else cout<<"may man";
	
}

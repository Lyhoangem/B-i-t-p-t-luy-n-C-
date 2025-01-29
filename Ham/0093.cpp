#include<iostream>
using namespace std;

int sonhonhat(int A, int B){
	if(A>B) return B;
	else if(A==B) return A;
	else return A;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<sonhonhat(sonhonhat(a,b),c);
}

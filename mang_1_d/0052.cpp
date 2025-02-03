#include <iostream>
#include <vector>
#include <sstream>
#include<cmath>
#include<iomanip>
using namespace std;


bool checknguyento(int n){
	if(n<=1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void tbnguyento(const vector<int>& arr){
	double sum=0;
	int dem=0;
	for(int i=0;i<arr.size();i++){
		if(checknguyento(arr[i])) {
			sum+=arr[i];
			dem++;
		}
	}
	
	if(dem==0) cout<<"-";
	else{
		double tbnguyento=(double)sum/dem;
		cout<<fixed<<setprecision(2)<<tbnguyento;
	} 
	
}

int main() {
    vector<int> arr;
    string input;

    while (true) {
        getline(cin, input);
        if (input.empty()) {
            break; 
        }
        
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number); 
        }
    }
 tbnguyento(arr);
    
    return 0;
}


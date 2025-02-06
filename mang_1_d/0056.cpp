#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    while(cin>>n){
    	v.push_back(n);
	}
    
 set<int> v1;
 for(int i=0; i<v.size(); i++){
    v1.insert(v[i]);
 }
  if(v1.size()<3) cout<<"-";

  set<int>:: iterator it = v1.begin();
  
  advance(it,2); 
  cout<<*it;

}

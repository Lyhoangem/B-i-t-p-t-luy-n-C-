#include <iostream>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> v;
    string s;
    //nhap mang 
    while (true) {
        getline(cin, s);
        if (s.empty()) break;

        stringstream ss(s);
        int number;
        while (ss >> number) {
            v.push_back(number);
        }
    }
    //tim so khac nhau
    set<int> sokhac(v.begin(), v.end());
    if (sokhac.size() < 3) {
        cout << "-";
    } 
	
	else {
        vector<int> v(sokhac.begin(), sokhac.end());

        // tim so nho thu 3
        cout << v[2];
    }

    return 0;
}


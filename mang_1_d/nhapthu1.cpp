#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    string s;
    string prev_s = " ";

    // Nh?p m?ng cho �?n khi ng�?i d�ng nh?n Enter hai l?n li�n ti?p
    while (true) {
        getline(cin, s);
        if (s.empty() && prev_s.empty()) break;  // N?u hai d?ng li�n ti?p tr?ng, k?t th�c v?ng l?p
        prev_s = s;  // L�u gi� tr? d?ng tr�?c ��

        if (!s.empty()) {
            stringstream ss(s);
            int number;
            while (ss >> number) {
                v.push_back(number);
            }
        }
    }

    set<int> v1;
    for(int i = 0; i < v.size(); i++) {
        v1.insert(v[i]);
    }

    if(v1.size() < 3) {
        cout << "-";
    } else {
        set<int>::iterator it = v1.begin();
        advance(it, 2);  // Di chuy?n iterator t?i v? tr� th? 3 (0-based index)
        cout << *it;     // In gi� tr? c?a ph?n t? th? 3
    }

    return 0;
}


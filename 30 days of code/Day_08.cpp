#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name,search_name;
    long num;
    cin >> n;
    map <string, long> phonebook;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> num;
        phonebook[name] = num;
    }
    while(cin >> search_name) {
        if (phonebook.find(search_name) != phonebook.end()) {
            cout << search_name << "=" << phonebook[search_name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}

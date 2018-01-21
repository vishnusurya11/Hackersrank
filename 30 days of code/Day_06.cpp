#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        string s;
        string s_even, s_odd;
        cin >> s;
        for(int j=0; j < s.size(); j++){
            if(j%2==0){
                s_even += s[j];
            }else{
                s_odd+= s[j];
            }
        }
        cout << s_even << " " << s_odd << endl;
    }
    return 0;
}

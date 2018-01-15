


#include <bits/stdc++.h>
//#include <algorithm>

using namespace std;

int minimumTime(vector <int> x) {
    //  Return the minimum time needed to visit all the houses.
    int mintime(0);
    std::sort(x.begin(), x.end(), std::greater<int>());
    for(int i=1; i < x.size(); i++)
    {
        mintime= mintime + (x[i-1] - x[i]);
    }
    //cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    return mintime;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int x_i = 0; x_i < n; x_i++){
           cin >> x[x_i];
        }
        int result = minimumTime(x);
        cout << result << endl;
    }
    return 0;
}

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int count(0), maxcount(0),rem(0);
    
    while (n)
    {
        rem = n % 2;        
        count = (count + rem) * rem;
        maxcount = max(count, maxcount);        
        n >>= 1;
    }
    
    cout << maxcount << endl;
    return 0;
}

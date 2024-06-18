#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    double exaprice = ((double)x*100)/(100-(double)y);
    double ans = exaprice+(((double)z*exaprice)/100);
    
    cout << fixed << setprecision(2) << ans << endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

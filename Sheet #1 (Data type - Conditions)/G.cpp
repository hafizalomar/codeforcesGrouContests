#include<iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main()
{
    int n;
 
    cin >> n;
 
 
    long long result = (long long)n*(n+1) / 2;
 
    cout << result << endl;
 
    return 0;
}
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main()
{
    double pi = 3.141592653;
    double r;
 
    cin >> r;
 
    double area = pi * pow(r,2);
 
    cout << fixed << setprecision(9) << area << endl;
 
    return 0;
}
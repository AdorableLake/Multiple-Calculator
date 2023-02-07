#include<iostream>
#include<cmath>
using namespace std;

int main() {
    cout << "Enter length, width and monitor's size:" << endl;
    int v1=0, v2=0, v3=0;
    cin >> v1 >> v2 >> v3;
    double s = sqrt(v1*v1+v2*v2);
    double ppi = s/v3;
    cout << "The PPI of the monitor is " << ppi << endl;
    return 0;
}

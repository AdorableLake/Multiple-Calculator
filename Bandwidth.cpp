#include<iostream>
using namespace std;

int main() {
    long int length=0, width=0, depth=0, rate=0;
    cout << "Your monitor's resolution: [Pixel Length/Pixel Width/Color Depth/Refresh Rate]" << endl;
    cin >> length >> width >> depth >> rate;
    double bandwidth = ((length*width*depth*rate)/1000)/1000;
    cout << "Your monitor's bandwidth is " << bandwidth << " Mbit/s." << endl;
    return 0;
}

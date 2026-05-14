#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;
int main(){
    float temp = 36.6789123f;
    double distance =  384400.123456789;
    cout << "Temperature (floa): "<<setprecision(8)<<temp<<endl;
    cout << "Distance (double): "<<setprecision(13)<<distance<<endl;
    return 0;
}
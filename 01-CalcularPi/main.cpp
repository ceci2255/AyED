#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double liebniz(){
    double pi_l = 0;
    int MAX_ITERACIONES = 1000000;

    for (int i = 0; i < MAX_ITERACIONES; i++){
        pi_l += 4*(pow((-1), i)/(2*i+1));
    }
    
    return pi_l;
}

int main(){
    cout << "El numero pi usando la serie de liebniz es: " << setprecision(7) << liebniz() << endl;
    return 0;
}
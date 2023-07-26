#include <iostream>
#include <iomanip>

using namespace std;

double liebniz(){
    double pi_estimado = 0.0;
    double signo = 1.0;
    int denominador = 1;
    while (true) {
        pi_estimado += signo / denominador;
        signo *= -1;
        denominador += 2;

        double error = pi_estimado * 4 - 3.141592;
        if (error >= -0.0000005 && error <= 0.0000005)
            break;
    }
    return pi_estimado * 4;
}

int main(){
    cout << "El numero pi usando la serie de liebniz es: " << setprecision(7) << liebniz() << endl;
    return 0;
}

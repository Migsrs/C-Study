#include <iostream>
#include <cmath>
#include <locale>

int main(){

    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    using std::cout;

    double x;
    double y;
    double z;

    cout << "Coloque o valor do primeiro cateto: ";
    std::cin >> x;
    cout << "Coloque o valor do segundo cateto: ";
    std::cin >> y;

    z = sqrt((pow(x,2)+pow(y,2)));

    cout << "O valor da hipotenusa é " << z;
    

    return 0;
}
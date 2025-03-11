#include <iostream>
#include <locale>

int main(){

    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    using std::cout;

    int op;
    double t1;
    double tf;

    cout << "------Conversor de Temperatura------" << '\n';
    cout << "1. Celsius para Fahrenheit" << '\n';
    cout << "2. Celsius para Kelvin" << '\n';
    cout << "3. Kelvin para Fahrenheit" << '\n';
    cout << "4. Kelvin para Celsius" << '\n';
    cout << "5. Fahrenheit para Kelvin" << '\n';
    cout << "6. Fahrenheit para Celsius" << '\n';
    cout << "------------------------------------" << '\n';
    cout << "Selecione a opção desejada: ";
    std::cin >> op;

    switch(op){
        
        case 1:
            cout << "Indique a temperatura em Celsius: ";
            std::cin >> t1;
            tf = (t1 * 9/5) + 32;
            cout << "A temperatura " << t1 << "°C em Fahrenheit é: " << tf;
            break;

        case 2:
            cout << "Indique a temperatura em Celsius: ";
            std::cin >> t1;
            tf = t1 + 273.15;
            cout << "A temperatura " << t1 << "°C em Kelvin é: " << tf;
            break;

        case 3:
            cout << "Indique a temperatura em Kelvin: ";
            std::cin >> t1;
            tf = (t1 - 273.15) * 9/5 + 32;
            cout << "A temperatura " << t1 << "K em Fahrenheit é: " << tf; 
            break;

        case 4:
            cout << "Indique a temperatura em Kelvin: ";
            std::cin >> t1;
            tf = t1 - 273.15;
            cout << "A temperatura " << t1 << "K em Celsius é: " << tf;
            break;

        case 5:
            cout << "Indique a temperatura em Fahrenheit: ";
            std::cin >> t1;
            tf = (t1 - 32) * 5/9 + 273.15;
            cout << "A temperatura " << t1 << "°F em Kelvin é: " << tf;
            break;

        case 6:
            cout << "Indique a temperatura em Fahrenheit: ";
            std::cin >> t1;
            tf = (t1 - 32) * 5/9;
            cout << "A temperatura " << t1 << "°F em Celsius é: " << tf;
            break;

    }

    return 0;
}
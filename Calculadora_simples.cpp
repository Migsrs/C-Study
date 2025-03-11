#include <iostream>
#include <locale>

int main(){
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    using std::cout;

    char op;
    double x;
    double y;
    
    cout << "Coloque o valor do primeiro número: ";
    std::cin >> x;

    cout << "Coloque o valor do segundo número: ";
    std::cin >> y;

    cout << "Coloque a operação desejada: ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        cout << "A soma da operação é: " << x+y;
        break;

    case '-':
        cout << "A subtração da operação é: " << x-y;
        break;

    case '*':
        cout << "A multiplicação da operação é: " << x*y;
        break;

    case '/':
        cout << "A divisão da operação é: " << x/y;
        break;

    default:
        cout << "Coloque uma operação válida!";
        break;
    }

    return 0;
}
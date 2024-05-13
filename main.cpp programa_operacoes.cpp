#include <iostream>

using namespace std;
float soma(int x, int y){
  return x+y;
}
float sub(int x, int y){
return x-y;
}
float mult(int x, int y){
return x*y;
}
float divisao(int x, int y){
return x/y;
}

int main() {
int num1, num2;
 cout << "Digite o primeiro número: ";
 cin >> num1;
 cout << "Digite o segundo número: ";
 cin >> num2;
 cout << "A soma é: " << soma(num1, num2) << endl;
 cout << "A subtração é: " << sub(num1, num2) << endl;
 cout << "A multiplicação é: " << mult(num1, num2) << endl;
 cout << "A divisão é: " << divisao(num1, num2) << endl;
}
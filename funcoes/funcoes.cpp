//Aula Daves Tecnologia

#include <iostream>
using namespace std;

//Sempre declarar a funcao antes do Main
//prototipo da funcao
int soma(int a, int b);
void imprime(string mensagem);
void tabuada(int numero);

int main()
{
	int numero;
	cout << "Qual tabuada deseja saber?";
	cin >> numero;
//	imprime("Programa exemplo de funcao");
	tabuada(numero);
	//cout << soma(10 , 10);

   return 0;
}
void tabuada(int numero) {
	cout << "Tabudada do " << numero << endl;
	for (int i = 1; i < 10; i++) {
		cout << numero << "x" << i << "=" << (numero * i)<< endl;
	}
}

void imprime(string mensagem) {
	cout << endl;
	cout << "Mensagem: " << mensagem << endl;
}

//implementar a funcao
int soma(int a, int b) {
	return a + b;
}
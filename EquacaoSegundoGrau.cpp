#include <iostream>  // inclui as rotinas de entrada/saída (cout, cin)
#include <cmath>     // inclui funções matemáticas como sqrt
#include <string>    // inclui a classe std::string para ler "s" ou "n"

int main() {                           // ponto de entrada do programa
    while (true) {                     // laço infinito, igual ao while True do Python
        double a, b, c;                // declara as variáveis de ponto flutuante (coeficientes)

        std::cout << "Digite o coeficiente a: ";  // pede 'a'
        std::cin  >> a;                           // lê 'a' do teclado

        std::cout << "Digite o coeficiente b: ";  // pede 'b'
        std::cin  >> b;                           // lê 'b'

        std::cout << "Digite o coeficiente c: ";  // pede 'c'
        std::cin  >> c;                           // lê 'c'

        if (a == 0) {                             // valida: em equação do 2º grau, 'a' não pode ser zero
            std::cout << "O coeficiente a não pode ser zero.\n"; // avisa o erro
            continue;                              // volta para o início do laço para nova tentativa
        }

        double delta = b * b - 4 * a * c;         // calcula o discriminante (b^2 - 4ac)

        if (delta < 0) {                          // se delta negativo, não existem raízes reais
            std::cout << "A equacao nao possui raizes reais.\n";
        } else if (delta == 0) {                  // se delta zero, existe uma raiz real (raiz dupla)
            double x = -b / (2 * a);              // calcula a única raiz
            std::cout << "A equacao possui uma raiz real: " << x << "\n"; // mostra a raiz
        } else {                                   // caso delta positivo, existem duas raízes reais
            double raiz_delta = std::sqrt(delta);  // calcula a raiz quadrada de delta
            double x1 = (-b + raiz_delta) / (2 * a); // primeira raiz
            double x2 = (-b - raiz_delta) / (2 * a); // segunda raiz
            std::cout << "A equacao possui duas raizes reais: " 
                      << x1 << " e " << x2 << "\n"; // mostra as duas raízes
        }

        std::string sair;                           // variável para capturar a decisão do usuário
        std::cout << "Deseja sair? (s/n): ";       // pergunta se deve encerrar
        std::cin  >> sair;                          // lê a resposta (string para aceitar 's' ou 'S')

        if (!sair.empty() && (sair[0] == 's' || sair[0] == 'S')) { // se começar com 's'/'S'
            break;                                   // interrompe o laço e encerra o programa
        }
    }

    return 0;                                       // retorna 0 indicando término bem-sucedido
}

#include <iostream>
#include <cmath>

using namespace std;

/* 
O objetivo deste programa é fazer alguns calculos relacionados a equacao da reta. 
Por exemplo: encontrar a inclinacao a partir da equacao da reta ou a própria equacao da reta a partir de um de seus pontos.

Preguiça de testar...
*/

// Variáveis globais
char argUm;
double A, B, C, m;
double px1;
double px2;
double py1;
double py2;

// Declaração de funções
double inclinacao_da_reta(double, double, double, double);
double coeficiente_C(double, double, double);
double y_de_x_da_reta(double);

int main()
{
/*
    O programa usa um conjunto de informacoes de entrada para encontrar soluções para exercícios de equações da reta.
    A) Dois pontos pertencentes a uma reta;
    B) Inclinacao da reta e um ponto pertencente a reta;
    C) Equacao da reta;
   */

  cout << "Escolha qual o conjunto de informacoes de entrada:\n" << "A - Dois pontos pertencentes a uma reta\nB - Inclinacao da reta e um ponto pertencente a reta\nC - Equacao da reta\n";
  cin >> argUm;

  if (toupper(argUm) == 'A')
  {
      /* Calcular com base no uso de dois pontos*/

    cout <<"Informe os valores de px1, py1, px2 e py2 respectivamente considerando a equacao da reta AX + BY + C = 0\n";
    cin >> px1 >> py1 >> px2 >> py2;

    m = inclinacao_da_reta(py1, py2, px1, px2);
    C = coeficiente_C(m, px1, py1);
    B = 1; // Considerar B o menor valor inteiro positivo diferente de 0, para evitar paralelismos (?)
    A = -m;

    cout << "A equacao da reta pode ser considerada " << A << "X + " << B << "Y + " << C << "\nAssim como m = " << m;
  }
  else if (toupper(argUm) == 'B')
  {
      /* Calcular a partir da inclinacao da reta e um ponto a ela pertencente */

    cout <<"Informe os valores de m, px1 e py1 respectivamente considerando a equacao da reta AX + BY + C = 0\n";
    cin >> m >> px1 >> py1;

    C = coeficiente_C(m, px1, py1);
    B = 1; // Considerar B o menor valor inteiro positivo diferente de 0, para evitar paralelismos (?)
    A = -m;

    cout << "A equacao da reta pode ser considerada " << A << "X + " << B << "Y + " << C;
  }
  else if (toupper(argUm) == 'C')
  {
      /* Calcular a inclinacao a partir da equacao da reta */

      cout <<"Informe os valores de A, B e C respectivamente considerando a equacao da reta AX + BY + C = 0\n";
      cin >> A >> B >> C;

      m = (-A/B);
      px1 = 0.0;
      px2 = 1.0;
      py1 = y_de_x_da_reta(px1);
      py2 = y_de_x_da_reta(px2);
      
      cout <<"A inclinacao desta reta é de " << m << " e dois de seus pontos sao: (" << px1 << "," << py1 << ") e (" << px2 << "," << py2 << ")";
  }
  else
  {
      cout << "Opcao invalida, escolha A, B ou C";
      return 0;
  }

    return 0;
}
/*
    Sessão de funções!
        Devem ser declaradas antes da função main()
*/
double inclinacao_da_reta(double ya, double yb, double xa, double xb)
{
    return ((yb - ya)/(xb - xa));
}

double coeficiente_C(double m, double xa, double ya)
{
    return ((m * xa) - ya);
}

double y_de_x_da_reta(double x)
{
    return ((-A * x - C)/B);
}

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c, delta, x1, x2;
  cin >> a >> b >> c;  //leia(a,b,c)
  if(a == 0)
  {
    cout << "Não é uma equação do segundo grau";
    return 0; //termina
  }
  delta = b*b-4*a*c;
  if(delta > 0)
  {
      x1 = (-b+sqrt(delta))/(2*a);
      x2 = (-b-sqrt(delta))/(2*a);
      cout << x1 << " é " << x2;
  }
  if(delta == 0)
  {
      x1 = x2 = -b/(2*a);
      cout << x1 << " é " << x2;
  }
 if(delta < 0)
  {
      cout << "Não existe raiz real";
  }
    return 0;
}
//Usar no terminal para criar build / compilar o código
//Navegar pelo terminal:
// cd -> change directory; mudar para o diretório escolhido (ex: cd 'nova pasta')
// ls -> list; lista os arquivos e pastas do diretório atual
// ./ -> run; roda o arquivo escolhido (./eq2g)
//
//g++ -o eq2g eq2g.cpp
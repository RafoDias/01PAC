#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Matrix
{
    private:
    double** thisMatrix;
    
    public:
    int rows;
    int columns;

    Matrix(double** array) {
        // Acha o numero de linhas e colunas
        rows = sizeof(array)/sizeof(array[0]); // Linhas
        columns = sizeof(array[0])/sizeof(double); // Colunas

        thisMatrix = new double*[rows]; // pointer que aponta pra thisMatrix -> Um array com pointers para outros arrays. 
                                                 // thisMatrix é um pointer pra primeira linha, que é um array com os valores.
                                                 // Acessa-se thisMatrix[linha][coluna] para obter o valor aij da matriz

        for (int i = 0; i < rows; i++)
        {
            thisMatrix[i] = new double[columns];
            for (int j = 0; j < columns; j++)
            {
                thisMatrix[i][j] = array[i][j];
            }
        }
    }

    public: // Declaração de funções a serem criadas fora da classe
    string toString();
    int Lines();
    int Columns();
    double get(int line, int column);
    Matrix plus(Matrix b);
    Matrix minus(Matrix b);
    Matrix times(Matrix b);
    Matrix divides(Matrix b);
    bool equals(Matrix b);
};

    string Matrix::toString() {
        string returnString;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                returnString.append(to_string(thisMatrix[i][j]));
                returnString += " ";
            }
            cout << endl;
        }
        return returnString;
    }

        // OVERRIDE DO OSTREAM E DO OPERADOR << (USADOS NO COMANDO COUT). https://stackoverflow.com/questions/5171739/tostring-override-in-c
    inline std::ostream & operator<<(std::ostream & Str, Matrix v) { 
    Str << v.toString(); // print something from v to str, e.g: Str << v.getX();
    return Str;
    }

    int Matrix::Lines() {
        return rows;
    }

    int Matrix::Columns() {
        return columns;
    }

    double Matrix::get(int line, int column) {
        if (line >= rows || column >= columns) {
            throw std::invalid_argument("Posicao inexistente na matriz.");
        }

        return thisMatrix[line][column];
    }

    Matrix Matrix::plus(Matrix b) {
        if (rows != b.rows || columns != b.columns)
        {
            throw std::invalid_argument("Posicao inexistente na matriz.");
        }
        double* ptrArray = new double(rows);
        double** ptr = &ptrArray;

        double array[rows][columns];

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++)
            {
                array[i][j] = thisMatrix[i][j] + b.get(i,j);
            }
        }
        double** ptr = array;
        return Matrix();
        
    }
    Matrix minus(Matrix b);
    Matrix times(Matrix b);
    Matrix divides(Matrix b);
    bool equals(Matrix b);
    Matrix simplified();
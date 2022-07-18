#include <iostream>
#include <string>

using namespace std;

class Matrix
{
    private:
    double** thisMatrix;

    public:
    int rows;
    int columns;

    Matrix(double** array, int l, int c) {
        // Acha o numero de linhas e colunas
        rows = l; // Linhas
        columns = c; // Colunas

        thisMatrix = array; // pointer que aponta pra thisMatrix -> Um array com pointers para outros arrays. 
                                                 // thisMatrix é um pointer pra primeira linha, que é um array com os valores.
                                                 // Acessa-se thisMatrix[linha][coluna] para obter o valor aij da matriz
    }

    public: // Declaração de funções a serem criadas fora da classe
    string toString();
    int Lines();
    int Columns();
    double get(int line, int column);
    Matrix Plus(Matrix b);
    Matrix Minus(Matrix b);
    Matrix Times(double escalar);
    Matrix Times(Matrix b);
    Matrix Transpose();
    bool IsSquare();
    bool IsSymmetric();
    void Clean(); // Talvez retornar uma string ou bool pra confirmar se foi bem sucedido
};

    string Matrix::toString() {
        string returnString;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                returnString.append(to_string(thisMatrix[i][j]));
                returnString += " ";
            }
            returnString += "\n";
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

    Matrix Matrix::Plus(Matrix b) {
        if (rows != b.rows || columns != b.columns)
        {
            throw std::invalid_argument("Posicao inexistente na matriz.");
        }

        double** ptr = new double*[rows];

        for (int i = 0; i < rows; i++){
            ptr[i] = new double[columns];
            for (int j = 0; j < columns; j++)
            {
                ptr[i][j] = thisMatrix[i][j] + b.get(i,j);
            }
        }

        return Matrix(ptr, rows, columns);
    }

    Matrix Matrix::Minus(Matrix b){
        if (rows != b.rows || columns != b.columns){
            throw std::invalid_argument("Posicao inexistente na matriz.");
        }

        double** ptr = new double*[rows];

        for (int i = 0; i < rows; i++){
            ptr[i] = new double[columns];
            for (int j = 0; j < columns; j++)
            {
                ptr[i][j] = thisMatrix[i][j] - b.get(i,j);
            }
        }

        return Matrix(ptr, rows, columns);
    }

    Matrix Matrix::Times(double escalar)
    {
        double** ptr = new double*[rows];

        for (int i = 0; i < rows; i++){
            ptr[i] = new double[columns];
            for (int j = 0; j < columns; j++)
            {
                ptr[i][j] = thisMatrix[i][j] * escalar;
            }
        }
        return Matrix(ptr, rows, columns);
    }
    
    Matrix Matrix::Times(Matrix b)
    {
        // Matriz produto é a linha da primeira e a coluna da segunda
        // A primeira deve possuir a coluna igual à linha da segunda
        if (columns != b.rows){
            throw std::invalid_argument("Nao e possivel multiplicar essas matrizes");
        }
        double** ptr = new double*[rows];
        
        for (int i = 0; i < rows; i++){
            ptr[i] = new double[b.columns];

            for (int j = 0; j < b.columns; j++)
            {
                double soma = 0;
                
                for (int k = 0; k < columns; k++){
                    soma += (thisMatrix[i][k] * b.get(k,j));
                }
                
                ptr[i][j] = soma;
            }
        }

        return Matrix(ptr, rows, b.columns);
    }

    Matrix Matrix::Transpose()
    {
        double** ptr = new double*[columns];

        for (int i = 0; i < columns; i++)
        {
            ptr[i] = new double[rows];
            for (int j = 0; j < rows; j++)
            {
                ptr[i][j] = thisMatrix[j][i];
            }
        }

        return Matrix(ptr, columns, rows);
    }

    bool Matrix::IsSquare()
    {
        if (rows == columns)
        {
            return true;
        }
        
        return false;
    }
    bool Matrix::IsSymmetric()
    {
        if (IsSquare() == false)
            return false;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (thisMatrix[i][j] != thisMatrix[j][i])
                {
                    return false;
                }
                
            }
            
        }
        
        return true;
    }
    void Matrix::Clean()
    {
        for (int i = (rows-1); i >= 0; i--)
        {
            delete thisMatrix[i];
        }
        
        delete thisMatrix;
    }
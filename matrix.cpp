#include <iostream>
using namespace std;

class Matrix
{
    int rows, cols;
    int **mat;

public:
    Matrix(int, int);
    Matrix(const Matrix &);
    ~Matrix();
    void input();
    void display();
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    Matrix operator*(Matrix);
};

Matrix::Matrix(int r = 0, int c = 0) : rows(r), cols(c)
{
    mat = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        mat[i] = new int[cols];
    }
}

Matrix::Matrix(const Matrix &m)
{
    cout << "Copy constructor called" << endl;
    rows = m.rows;
    cols = m.cols;
    mat = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        mat[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat[i][j] = m.mat[i][j];
        }
    }
}

Matrix::~Matrix()
{
    cout << "Destructor called" << endl;
    for (int i = 0; i < rows; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
}

void Matrix::input()
{
    cout << "Enter the elements of the matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void Matrix::display()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix Matrix::operator+(Matrix m)
{
    Matrix res(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            res.mat[i][j] = mat[i][j] + m.mat[i][j];
        }
    }
    return res;
}

Matrix Matrix::operator-(Matrix m)
{
    Matrix res(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            res.mat[i][j] = mat[i][j] - m.mat[i][j];
        }
    }
    return res;
}
Matrix Matrix::operator*(Matrix m)
{
    Matrix res(rows, m.cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
        {
            res.mat[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                res.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        }
    }
    return res;
}

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of the first matrix" << endl;
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of the second matrix" << endl;
    cin >> rows2 >> cols2;

    Matrix matrix1(rows1, cols1), matrix2(rows2, cols2);

    cout << "Enter the elements of the first matrix" << endl;
    matrix1.input();
    cout << "Enter the elements of the second matrix" << endl;
    matrix2.input();

    cout << "The first matrix is" << endl;
    matrix1.display();
    cout << "The second matrix is" << endl;
    matrix2.display();

    int choice = 0;
    while (true)
    {
        cout << "Enter 1: Add, 2: Subtract, 3: Multiply, 4: Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            if (rows1 == rows2 && cols1 == cols2)
            {
                Matrix res = matrix1 + matrix2;
                cout << "The sum of the two matrices is" << endl;
                res.display();
            }
            else
            {
                cout << "The matrices cannot be added" << endl;
            }
            break;
        }
        case 2:
        {
            if (rows1 == rows2 && cols1 == cols2)
            {
                Matrix res = matrix1 - matrix2;
                cout << "The difference of the two matrices is" << endl;
                res.display();
            }
            else
            {
                cout << "The matrices cannot be subtracted" << endl;
            }
            break;
        }
        case 3:
        {
            if (cols1 == rows2)
            {
                Matrix res = matrix1 * matrix2;
                cout << "The product of the two matrices is" << endl;
                res.display();
            }
            else
            {
                cout << "The matrices cannot be multiplied" << endl;
            }
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    }

    return 0;
}

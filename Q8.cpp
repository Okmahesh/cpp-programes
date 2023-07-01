#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<vector<double>> matrix;
    int rows, cols;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        matrix.resize(rows,vector<double>(cols, 0.0));
    }

    Matrix(const vector<vector<double>>& mat) {
        rows = mat.size();
        cols = mat[0].size();
        matrix = mat;
    }

    double& operator()(int i, int j) {
        return matrix[i][j];
    }

    const double& operator()(int i, int j) const {
        return matrix[i][j];
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result(i, j) = (*this)(i, j) + other(i, j);
            }
        }

        return result;
    }
    Matrix operator*(const Matrix& other) const {
        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                double sum = 0.0;
                for (int k = 0; k < cols; k++) {
                    sum += (*this)(i, k) * other(k, j);
                }
                result(i, j) = sum;
            }
        }
        return result;
    }

    Matrix transpose() const {
        Matrix result(cols, rows);

        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                result(i, j) = (*this)(j, i);
            }
        }
        return result;
    }

    friend ostream& operator<<(ostream& os, const Matrix& mat) {
        for (int i = 0; i < mat.rows; i++) {
            for (int j = 0; j < mat.cols; j++) {
                os << mat(i, j) << " ";
            }
            os << endl;
        }
        return os;
    }
};

int main() {
    Matrix mat1(3, 3);
    Matrix mat2(3, 3);
    int c;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat1(i, j) = i + j;
            mat2(i, j) = i - j;
        }
    }

    Matrix matSum = mat1 + mat2;
    cout << "Matrix 1:\n" << mat1 << endl;
    cout << "Matrix 2:\n" << mat2 << endl;
    cout<<"what you want to do with this two matrix:-\n1.sum\n2.transpose\n3.product\n enter from(1,2,3):- ";
    cin>>c;
    switch(c){
        case 1:
            cout << "Sum:\n" << matSum << endl;
            break;
        case 2:
            cout << "Matrix 1 Transpose:\n" << mat1.transpose() << endl;
            cout << "Matrix 2 Transpose:\n" << mat2.transpose() << endl;
            break;
        case 3:
            Matrix matProduct = mat1 * mat2;
            cout << "Product:\n" << matProduct << endl;
            cout<<"enter correct choice!!";
            break;
    }
    return 0;
}

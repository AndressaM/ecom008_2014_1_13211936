#ifndef MATRIZ_H
#define MATRIZ_H
#include "MatrixADT.h"

class matriz : public MatrixADT
{
private:

    int columns;
    int rows;
    double k;
    double d1,d2;
public:
    matriz ();
    double **content;
    void create(int columns, int rows);
    void setElementAt(int columns, int rows, double value);
    double elementAt(int columns, int rows);
    void sub(const MatrixADT & other);
    double determinant();
    void multiplyBy(double k);
    MatrixADT * transpose();
    QString toString();
    void print();
};

#endif // MATRIZ_H

#include "matriz.h"
#include <iostream>
#include <QString>

using namespace std;
matriz::matriz()
{

}
void matriz::create(int columns, int rows) {
    this->content = new double*[rows];
    for(int i=0; i<columns;i++){
        this->content[i]=new double[columns];
    }
    this ->rows = rows;
    this->columns = columns;
}
void matriz::setElementAt(int columns, int rows, double value){
    this->content [rows][columns]=value;
}
double matriz::elementAt(int columns, int rows){

    return this->content [rows][columns];
}
void matriz::sub(const MatrixADT & other){

}


void matriz::multiplyBy(double k){

    for(int i = 0;i< rows;i++){
        for(int j = 0;j< columns;j++){

            setElementAt(i,j,(elementAt(i,j)*k));
        }
    }
}
MatrixADT* matriz::transpose(){

}
double matriz::determinant(){
    double d1=1,d2=1;
    if(rows == 2 && columns == 2){
        for(int i =0; i< rows; ++i){
            for(int j=0;j< columns; ++j){
                if(i==j){
                    d1 = d1*elementAt(i,j);
                }
                else{
                    d2 = (d2*elementAt(i,j));
                }

            }

        }
    }
    return d1-d2;

}


QString matriz::toString(){
    for(int i =0; i< rows; ++i){
        for(int j=0;j< columns; ++j){
            cout <<this->elementAt(i,j)<< " ";

        }
        cout << endl;
    }
}

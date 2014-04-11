#include <QtCore/QCoreApplication>
#include "matriz.h"
#include <iostream>
using namespace std;
int main()
{
   matriz m;
   m.create(2,2);
   m.setElementAt(0,0,1);
   m.setElementAt(0,1,2);
   m.setElementAt(1,0,3);
   m.setElementAt(1,1,4);

   m.elementAt(1,0);
   //m.multiplyBy(2);
   m.transpose();
   m.toString();

   cout <<m.determinant() <<endl;



   return 0;
}

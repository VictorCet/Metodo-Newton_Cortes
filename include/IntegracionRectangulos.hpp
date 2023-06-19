#pragma once
#include <Funcion.hpp>
using namespace std;

class IntegracionRectangulos 
{
public:
    double integrar(Funcion& funcion, double a, double b, int n) {
        double h = (b - a) / n; 
        int contF=0;

        double suma = 0.0;
        for (int i = 0; i < n; i++) {
            float x = a + i * h; 
            double area = funcion.evaluar(x) * h; 
            suma += area;
            cout<<"F(x"<<contF<<")="<<x<<endl;
            contF++;
        }

        return suma;
    }
};
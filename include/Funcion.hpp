#pragma once

class Funcion {
public:
    double evaluar(double x) 
    {
        return x/(1+log(x));
    }
};
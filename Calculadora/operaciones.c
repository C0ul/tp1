#include "operaciones.h"

float suma (float a, float b)
{
  float  resultado;
 resultado  = a + b;

 return resultado;
}

float resta (float a,float b)
{
    float resultado;
    resultado= a-b;

    return resultado;
}

float multiplicacion (float a,float b)
{
    float resultado;
    resultado= a*b;

    return resultado;
}

float division (float a,float b)
{
    float resultado;
    resultado= a/b;

    return resultado;
}
float factorial(float a)
{

   float resultado;

    if (a == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = a* factorial(a-1);
    }
    return resultado;
}

